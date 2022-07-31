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
///   File: main.hpp
///
/// Author: $author$
///   Date: 7/29/2022, 7/31/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_HPP

#include "xos/app/console/crypto/code/base/main_opt.hpp"
#include "xos/io/crt/file/reader.hpp"
#include "xos/io/base64/read_to_output.hpp"

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace code {
namespace base {

/// class maint
template 
<class TExtends = xos::app::console::crypto::code::base::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef derives io_t;

    /// class output_t
    class exported output_t {
    public:
        /// constructors / destructor
        output_t(const output_t& copy): io_(copy.io_), carry_(0), shift_(2), byte_(0) {
        }
        output_t(io_t& io): io_(io), carry_(0), shift_(2), byte_(0) {
        }
        virtual ~output_t() {
        }
        
        /// ...out_base64
        virtual ssize_t begin_out_base64() {
            uint8_t &carry = carry_, &shift = shift_;
            carry = 0; shift = 2;
            return 0;
        }
        virtual ssize_t end_out_base64() {
            uint8_t &carry = carry_, &shift = shift_;
            carry = 0; shift = 2;
            return 0;
        }
        virtual ssize_t out_base64(unsigned d) {
            uint8_t &carry = carry_, &shift = shift_, &byte = byte_;
            io_t &io = io_;
            if (2 == (shift)) {
                byte = ((uint8_t)d << 2); /// 6 bits
                carry = 0; /// 0 bits 
                shift = 4;
            } else {
                if (4 == (shift)) {
                    byte |= (d >> 4); /// 8 bits
                    carry = ((d & 0xF) << 4); /// 4 bits
                    shift = 6;
                    return io.out((const char_t*)(&byte), 1);
                } else {
                    if (6 == (shift)) {
                        byte = (carry | (d >> 2)); /// 8 bits
                        carry = ((d & 0x3) << 6); /// 2 bits 
                        shift = 8;
                        return io.out((const char_t*)(&byte), 1);
                    } else {
                        if (8 == (shift)) {
                            byte = (carry | (d)); /// 8 bits
                            carry = 0; /// 0 bits 
                            shift = 2;
                            return io.out((const char_t*)(&byte), 1);
                        } else {
                        }
                    }
                }
            }
            return 0;
        }

    protected:
        io_t& io_;
        uint8_t carry_, shift_, byte_;
    }; /// class output_t
    typedef xos::io::base64::reader base64_reader_t;
    typedef xos::io::base64::read_to_outputt<output_t> base64_read_to_output_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...encode_source
    virtual int encode_source(const char_t* location) {
        int err = 1;
        const char_t* chars = 0;
        
        if ((chars = location) && (chars[0])) {
            io::crt::file::reader source;

            LOGGER_LOG_DEBUG("source.open(chars = \"" << chars << "\")...");
            if ((source.open(chars))) {
                LOGGER_LOG_DEBUG("...source.open(chars = \"" << chars << "\")");

                err = this->all_encode_source(source);

                LOGGER_LOG_DEBUG("source.close() \"" << chars << "\"...");
                if ((source.close())) {
                    LOGGER_LOG_DEBUG("...source.close() \"" << chars << "\"");
                } else {
                    LOGGER_LOG_ERROR("...failed on source.close() \"" << chars << "\"");
                }
            } else {
                LOGGER_LOG_ERROR("...failed on source.open(chars = \"" << chars << "\")");
            }
        }
        return err;
    }
    /// ...decode_source
    virtual int decode_source(const char_t* location) {
        int err = 1;
        const char_t* chars = 0;
        
        if ((chars = location) && (chars[0])) {
            io::crt::file::reader source;

            LOGGER_LOG_DEBUG("source.open(chars = \"" << chars << "\")...");
            if ((source.open(chars))) {
                LOGGER_LOG_DEBUG("...source.open(chars = \"" << chars << "\")");

                err = this->all_decode_source(source);

                LOGGER_LOG_DEBUG("source.close() \"" << chars << "\"...");
                if ((source.close())) {
                    LOGGER_LOG_DEBUG("...source.close() \"" << chars << "\"");
                } else {
                    LOGGER_LOG_ERROR("...failed on source.close() \"" << chars << "\"");
                }
            } else {
                LOGGER_LOG_ERROR("...failed on source.open(chars = \"" << chars << "\")");
            }
        }
        return err;
    }

    /// ...base64_encode_source
    virtual int base64_encode_source(io::reader& source) {
        int err = 0;
        ssize_t amount = 0;
        size_t size = 0;
        byte_t& byte = this->base64_source(size);
        
        if ((0 < (amount = (ssize_t)size))) {
            ssize_t count = 0;
            
            if (0 < (count = source.read(&byte, size))) {
                this->out64(&byte, count);
                if (amount == count) {
                    do {
                        if (0 < (count = source.read(&byte, size))) {
                            this->outln("\\");
                            this->out64(&byte, count);
                        }
                    } while (amount == count);
                }
                this->outln();
            }
        }
        return err;
    }
    /// ...base64_decode_source
    virtual int base64_decode_source(io::reader& source) {
        int err = 0;
        ssize_t amount = 0;
        size_t size = 0;
        byte_t& byte = this->base64_source(size);
        
        if ((0 < (amount = (ssize_t)size))) {
            ssize_t count = 0;
            
            if (0 < (count = source.read(&byte, size))) {
                output_t output(*this);
                base64_read_to_output_t output_reader(output);
                base64_reader_t reader(output_reader, source);
                
                reader.on_begin(&byte, size);
                base64_decode_source(reader, byte, (size_t)count);
                if (amount == count) {
                    do {
                        if (0 < (count = source.read(&byte, size))) {
                            base64_decode_source(reader, byte, (size_t)count);
                        }
                    } while (amount == count);
                }
                reader.on_end(&byte, size);
            }
        }
        return err;
    }
    virtual int base64_decode_source(base64_reader_t& reader, byte_t& byte, size_t size) {
        int err = 0;
        byte_t *bytes = 0;
        if ((bytes = &byte) && (size)) {
            for (; size; ++bytes, --size) {
                reader.on_read(bytes, 1);
            }
        }
        return err;
    }

    /// ...source
    virtual byte_t& base64_source(size_t& size) const {
        size = sizeof(base64_source_);
        return (byte_t&)base64_source_;
    }

protected:
    enum { base64_chunk = 6 };
    enum { base64_size = (8 * base64_chunk) };
    byte_t base64_source_[base64_size];
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace code
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_HPP
