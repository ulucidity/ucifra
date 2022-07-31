///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: reader.hpp
///
/// Author: $author$
///   Date: 7/30/2022, 7/31/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_IO_BASE64_READER_HPP
#define XOS_IO_BASE64_READER_HPP

#include "xos/io/delegated/reader.hpp"
#include "xos/base/logger.hpp"

namespace xos {
namespace io {
namespace base64 {

/// class reader_eventst
template 
<class TReader = xos::io::reader, 
 class TReaderEvents = xos::io::delegated::reader_eventst<TReader>, class TImplements = TReaderEvents>
class exported reader_eventst: virtual public TImplements {
public:
    typedef TImplements implements;
    typedef reader_eventst derives; 
    
    typedef char char_t;
    typedef TReader reader_t;
    typedef typename reader_t::what_t what_t;
    typedef typename reader_t::sized_t sized_t;

    /// constructors / destructor
    virtual ~reader_eventst() {
    }

    /// on...
    virtual ssize_t on_begin(what_t* what, size_t size) {
        return size;
    }
    virtual ssize_t on_end(what_t* what, size_t size) {
        return size;
    }
    virtual ssize_t on_base64_char(what_t* what, size_t size) {
        sized_t* sized = 0;

        if ((sized = ((sized_t*)what))) {
            char_t c = ((char_t)(*sized));
            unsigned d = 0;

            if (64 > (d = base64_digit(c))) {
                return on_base64_digit(d, what, size);
            }
        }
        return size;
    }
    virtual ssize_t on_base64_digit(unsigned d, what_t* what, size_t size) {
        return size;
    }

    /// ...base64...
    inline unsigned base64_digit(const char_t& c) const {
        unsigned d = 0;
        if (((char_t)('A') <= c) && ((char_t)('Z') >= c)) {
            d = (c - (char_t)('A'));
        } else {
            if (((char_t)('a') <= c) && ((char_t)('z') >= c)) {
                d = ((c - (char_t)('a')) + 26);
            } else {
                if (((char_t)('0') <= c) && ((char_t)('9') >= c)) {
                    d = ((c - (char_t)('0')) + 52);
                } else {
                    if (((char_t)('+') == c)) {
                        d = (62);
                    } else {
                        if (((char_t)('/') == c)) {
                            d = (63);
                        } else {
                            LOGGER_LOG_ERROR("...unexpected invalid_base64_char(" << char_to_string(c) << ")");
                            d = ((unsigned)-1);
                        }
                    }
                }
            }
        }
        return d;
    }
    
}; /// class reader_eventst
typedef reader_eventst<> reader_events;

/// class readert
template 
<class TReader = xos::io::reader, 
 class TReaderEvents = xos::io::base64::reader_eventst<TReader>, 
 class TReaderExtend = xos::io::delegated::readert<TReader, TReaderEvents>, 
 class TExtends = TReaderExtend, class TImplements = TReaderEvents>
class exported readert: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef readert derives; 
    
    typedef char char_t;
    typedef TReader reader_t;
    typedef TReaderEvents reader_events_t;
    typedef typename extends::what_t what_t;
    typedef typename extends::sized_t sized_t;

    /// constructors / destructor
    readert(const readert& copy): extends(copy), on_read_(0), reader_events_(copy.reader_events_) {
    }
    readert(reader_events_t& reader_events, reader_t& reader): extends(reader), on_read_(0), reader_events_(reader_events) {
    }
    readert(reader_t& reader): extends(reader), on_read_(0), reader_events_(*this) {
    }
    virtual ~readert() {
    }

    /// on...
    virtual ssize_t on_begin(what_t* what, size_t size) {
        if (&reader_events_ != this) {
            return reader_events_.on_begin(what, size);
        }
        return size;
    }
    virtual ssize_t on_end(what_t* what, size_t size) {
        if (&reader_events_ != this) {
            return reader_events_.on_end(what, size);
        }
        return size;
    }
    virtual ssize_t on_base64_char(what_t* what, size_t size) {
        if (&reader_events_ != this) {
            return reader_events_.on_base64_char(what, size);
        }
        return size;
    }
    virtual ssize_t on_base64_digit(unsigned d, what_t* what, size_t size) {
        if (&reader_events_ != this) {
            return reader_events_.on_base64_digit(d, what, size);
        }
        return size;
    }

    /// on_read...
    ssize_t (derives::*on_read_)(what_t* what, size_t size);
    virtual ssize_t on_read(what_t* what, size_t size) {
        ssize_t count = size;
        if ((on_read_)) {
            (this->*on_read_)(what, size);
        } else {
            this->on_read_begin(what, size);
        }
        return count;
    }
    virtual ssize_t on_read_begin(what_t* what, size_t size) {
        ssize_t count = size;
        sized_t* sized = 0;
        char_t c = 0;
        if ((sized = ((sized_t*)what))) {
            if (is_base64_char(c = ((char_t)(*sized)))) {
                LOGGER_LOG_DEBUG("this->on_begin(what = " << char_to_string(c) << ")...");
                this->on_begin(what, size);
                this->on_base64_char(what, size);
                on_read_ = &derives::on_read_base64;
            } else {
                if ((!is_nextln_char(c)) && (!is_ws_char(c))) {
                    LOGGER_LOG_DEBUG("this->on_end(what = " << char_to_string(c) << ")...");
                    this->on_end(what, size);
                    on_read_ = &derives::on_read_begin;
                } else {
                    if ((!is_ws_char(c))) {
                        LOGGER_LOG_DEBUG("is_nextln_char(" << char_to_string(c) << ")...");
                    }
                }
            }
        }
        return count;
    }
    virtual ssize_t on_read_nextln(what_t* what, size_t size) {
        ssize_t count = size;
        sized_t* sized = 0;
        char_t c = 0;
        if ((sized = ((sized_t*)what))) {
            if (is_base64_char(c = ((char_t)(*sized)))) {
                LOGGER_LOG_DEBUG("this->on_base64_char(what = " << char_to_string(c) << ")...");
                this->on_base64_char(what, size);
                on_read_ = &derives::on_read_base64;
            } else {
                if ((!is_nextln_char(c)) && (!is_ws_char(c))) {
                    LOGGER_LOG_DEBUG("this->on_end(what = " << char_to_string(c) << ")...");
                    this->on_end(what, size);
                    on_read_ = &derives::on_read_begin;
                } else {
                    if ((!is_ws_char(c))) {
                        LOGGER_LOG_DEBUG("is_nextln_char(" << char_to_string(c) << ")...");
                    }
                }
            }
        }
        return count;
    }
    virtual ssize_t on_read_base64(what_t* what, size_t size) {
        ssize_t count = size;
        sized_t* sized = 0;
        char_t c = 0;
        if ((sized = ((sized_t*)what))) {
            if (is_base64_char(c = ((char_t)(*sized)))) {
                LOGGER_LOG_DEBUG("this->on_base64_char(what = " << char_to_string(c) << ")...");
                this->on_base64_char(what, size);
            } else {
                if ((!is_nextln_char(c))) {
                    LOGGER_LOG_DEBUG("this->on_end(what = " << char_to_string(c) << ")...");
                    this->on_end(what, size);
                    on_read_ = &derives::on_read_begin;
                } else {
                    LOGGER_LOG_DEBUG("is_nextln_char(" << char_to_string(c) << ")...");
                    on_read_ = &derives::on_read_nextln;
                }
            }
        }
        return count;
    }

    /// is...char
    inline bool is_base64_char(const char_t& c) const {
        if (!(((char_t)('A') <= c) && ((char_t)('Z') >= c))) {
            if (!(((char_t)('a') <= c) && ((char_t)('z') >= c))) {
                if (!(((char_t)('0') <= c) && ((char_t)('9') >= c))) {
                    if (!(((char_t)('+') == c) || ((char_t)('/') == c))) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
    inline bool is_nextln_char(const char_t& c) const {
        switch ((char_t)c) {
        case '\\':
            return true;
        }
        return false;
    }
    inline bool is_ws_char(const char_t& c) const {
        switch ((char_t)c) {
        case '\n':
        case '\r':
        case '\t':
        case '\v':
            return true;
        }
        return false;
    }

protected:
    reader_events_t& reader_events_;
}; /// class readert
typedef readert<> reader;

} /// namespace base64
} /// namespace io
} /// namespace xos

#endif /// ndef XOS_IO_BASE64_READER_HPP
