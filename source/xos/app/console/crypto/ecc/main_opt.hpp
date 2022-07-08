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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 7/6/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPT_HPP

#include "xos/app/console/crypto/output/main.hpp"

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPT "key-pairs"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTUSE "ecc key pairs"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTVAL_S "k::"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTVAL_C 'k'
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPT "generate"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTUSE "generate ecc key pairs"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTVAL_S "g"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTVAL_C 'g'
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPT "test"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTUSE "test ecc key pairs"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTVAL_S "t"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTVAL_C 't'
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPT "donna"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTUSE "use ecc 25519 donna"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTVAL_S "d"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTVAL_C 'd'
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPT "mehdi"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTUSE "use ecc 25519 mehdi"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTVAL_S "m"
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTVAL_C 'm'
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTVAL_S \

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTION \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTION \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTION \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTION \
    XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTION \

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_OUTPUT_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_OUTPUT_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ARGS 0
#define XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace ecc {

/// class main_optt
template 
<class TExtends = xos::app::console::crypto::output::main, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::byte_array_t byte_array_t;
    typedef typename extends::crypto_array_t crypto_array_t;

    typedef typename extends::output_hex_verbage_sized_t output_hex_verbage_sized_t;

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

    /// ...test_ecc_25519_key_pairs_run
    int (derives::*test_ecc_25519_key_pairs_run_)(int argc, char_t** argv, char_t** env);
    virtual int test_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (test_ecc_25519_key_pairs_run_) {
            err = (this->*test_ecc_25519_key_pairs_run_)(argc, argv, env);
        } else {
            err = default_test_ecc_25519_key_pairs_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_test_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_test_generated_ecc_25519_key_pairs_run(argc, argv, env);
        return err;
    }
    virtual int before_test_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_test_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_test_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_test_ecc_25519_key_pairs_run(argc, argv, env))) {
            int err2 = 0;
            err = test_ecc_25519_key_pairs_run(argc, argv, env);
            if ((err2 = after_test_ecc_25519_key_pairs_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_test_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_test_ecc_25519_key_pairs_run;
        return err;
    }
    virtual int set_test_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_test_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    /// ...test_get_ecc_25519_key_pairs_run
    virtual int test_get_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_test_get_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_test_get_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_test_get_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_test_get_ecc_25519_key_pairs_run(argc, argv, env))) {
            int err2 = 0;
            err = test_get_ecc_25519_key_pairs_run(argc, argv, env);
            if ((err2 = after_test_get_ecc_25519_key_pairs_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_test_get_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        test_ecc_25519_key_pairs_run_ = &derives::all_test_get_ecc_25519_key_pairs_run;
        return err;
    }

    /// ...output_ecc_25519_key_pairs_run
    int (derives::*output_ecc_25519_key_pairs_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_ecc_25519_key_pairs_run_) {
            err = (this->*output_ecc_25519_key_pairs_run_)(argc, argv, env);
        } else {
            err = default_output_ecc_25519_key_pairs_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_ecc_25519_key_pairs_run(argc, argv, env))) {
            int err2 = 0;
            err = output_ecc_25519_key_pairs_run(argc, argv, env);
            if ((err2 = after_output_ecc_25519_key_pairs_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_ecc_25519_key_pairs_run;
        return err;
    }

    /// ...generate_ecc_25519_key_pairs_run
    int (derives::*generate_ecc_25519_key_pairs_run_)(int argc, char_t** argv, char_t** env);
    virtual int generate_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (generate_ecc_25519_key_pairs_run_) {
            err = (this->*generate_ecc_25519_key_pairs_run_)(argc, argv, env);
        } else {
            err = default_generate_ecc_25519_key_pairs_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_generate_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_generate_ecc_25519_key_pairs_mehdi_run(argc, argv, env);
        return err;
    }
    virtual int before_generate_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generate_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_ecc_25519_key_pairs_run(argc, argv, env);
        return err;
    }
    virtual int all_generate_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_ecc_25519_key_pairs_run(argc, argv, env))) {
            int err2 = 0;
            err = generate_ecc_25519_key_pairs_run(argc, argv, env);
            if ((err2 = after_generate_ecc_25519_key_pairs_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_generate_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_generate_ecc_25519_key_pairs_run;
        return err;
    }
    /// ...generate_ecc_25519_key_pairs_mehdi_run
    virtual int generate_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_generate_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generate_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generate_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_ecc_25519_key_pairs_mehdi_run(argc, argv, env))) {
            int err2 = 0;
            err = generate_ecc_25519_key_pairs_mehdi_run(argc, argv, env);
            if ((err2 = after_generate_ecc_25519_key_pairs_mehdi_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_generate_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_ecc_25519_key_pairs_run_ = &derives::all_generate_ecc_25519_key_pairs_mehdi_run;
        return err;
    }
    /// ...generate_ecc_25519_key_pairs_donna_run
    virtual int generate_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_generate_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generate_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generate_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_ecc_25519_key_pairs_donna_run(argc, argv, env))) {
            int err2 = 0;
            err = generate_ecc_25519_key_pairs_donna_run(argc, argv, env);
            if ((err2 = after_generate_ecc_25519_key_pairs_donna_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_generate_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_ecc_25519_key_pairs_run_ = &derives::all_generate_ecc_25519_key_pairs_donna_run;
        return err;
    }

    /// ...test_generated_ecc_25519_key_pairs_run
    int (derives::*test_generated_ecc_25519_key_pairs_run_)(int argc, char_t** argv, char_t** env);
    virtual int test_generated_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (test_generated_ecc_25519_key_pairs_run_) {
            err = (this->*test_generated_ecc_25519_key_pairs_run_)(argc, argv, env);
        } else {
            err = default_test_generated_ecc_25519_key_pairs_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_test_generated_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = test_generated_ecc_25519_key_pairs_mehdi_run(argc, argv, env);
        return err;
    }
    virtual int before_test_generated_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_test_generated_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_test_generated_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_test_generated_ecc_25519_key_pairs_run(argc, argv, env))) {
            int err2 = 0;
            err = test_generated_ecc_25519_key_pairs_run(argc, argv, env);
            if ((err2 = after_test_generated_ecc_25519_key_pairs_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_test_generated_ecc_25519_key_pairs_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_test_generated_ecc_25519_key_pairs_run;
        return err;
    }
    /// ...test_generated_ecc_25519_key_pairs_mehdi_run
    virtual int test_generated_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_test_generated_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_test_generated_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_test_generated_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_test_generated_ecc_25519_key_pairs_mehdi_run(argc, argv, env))) {
            int err2 = 0;
            err = test_generated_ecc_25519_key_pairs_mehdi_run(argc, argv, env);
            if ((err2 = after_test_generated_ecc_25519_key_pairs_mehdi_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_test_generated_ecc_25519_key_pairs_mehdi_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        test_generated_ecc_25519_key_pairs_run_ = &derives::all_test_generated_ecc_25519_key_pairs_mehdi_run;
        return err;
    }
    /// ...test_generated_ecc_25519_key_pairs_donna_run
    virtual int test_generated_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_test_generated_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_test_generated_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_test_generated_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_test_generated_ecc_25519_key_pairs_donna_run(argc, argv, env))) {
            int err2 = 0;
            err = test_generated_ecc_25519_key_pairs_donna_run(argc, argv, env);
            if ((err2 = after_test_generated_ecc_25519_key_pairs_donna_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_test_generated_ecc_25519_key_pairs_donna_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        test_generated_ecc_25519_key_pairs_run_ = &derives::all_test_generated_ecc_25519_key_pairs_donna_run;
        return err;
    }

    /// on_set...key...hex_literal...
    virtual int on_set_key_pairs_hex_literals
    (byte_array_t &public_key1, byte_array_t &private_key1, 
     byte_array_t &public_key2, byte_array_t &private_key2, string_t &literal) {
        int err = 0;
        xos::io::hex::read_to_byte_arrays to_arrays(&public_key1, &private_key1, &public_key2, &private_key2, null);
        if (!(err = this->on_set_hex_literals(to_arrays, literal))) {
        }
        return err;
    }

    /// ...option...
    virtual int on_set_key_pairs_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }
    virtual int on_key_pairs_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_key_pairs_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_test_get_ecc_25519_key_pairs_run(argc, argv, env))) {
                    if (!(err = set_output_ecc_25519_key_pairs_run(argc, argv, env))) {
                    }
                }
            }
        } else {
            if (!(err = set_output_ecc_25519_key_pairs_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* key_pairs_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_generate_key_pairs_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = set_generate_ecc_25519_key_pairs_run(argc, argv, env);
        return err;
    }
    virtual const char_t* generate_key_pairs_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_test_key_pairs_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = set_test_ecc_25519_key_pairs_run(argc, argv, env);
        return err;
    }
    virtual const char_t* test_key_pairs_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_ecc_25519_donna_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_generate_ecc_25519_key_pairs_donna_run(argc, argv, env))) {
            if (!(err = set_test_generated_ecc_25519_key_pairs_donna_run(argc, argv, env))) {
                if (!(err = set_test_ecc_25519_key_pairs_donna_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual const char_t* ecc_25519_donna_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTARG;
        return chars;
    }
    virtual int on_ecc_25519_mehdi_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_generate_ecc_25519_key_pairs_mehdi_run(argc, argv, env))) {
            if (!(err = set_test_generated_ecc_25519_key_pairs_mehdi_run(argc, argv, env))) {
                if (!(err = set_test_ecc_25519_key_pairs_mehdi_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual const char_t* ecc_25519_mehdi_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTVAL_C:
            err = this->on_key_pairs_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTVAL_C:
            err = this->on_generate_key_pairs_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTVAL_C:
            err = this->on_test_key_pairs_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTVAL_C:
            err = this->on_ecc_25519_donna_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTVAL_C:
            err = this->on_ecc_25519_mehdi_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_KEY_PAIRS_OPTVAL_C:
            chars = this->key_pairs_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_GENERATE_KEY_PAIRS_OPTVAL_C:
            chars = this->generate_key_pairs_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_TEST_KEY_PAIRS_OPTVAL_C:
            chars = this->test_key_pairs_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_DONNA_OPTVAL_C:
            chars = this->ecc_25519_donna_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ECC_25519_MEHDI_OPTVAL_C:
            chars = this->ecc_25519_mehdi_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace ecc
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_ECC_MAIN_OPT_HPP
