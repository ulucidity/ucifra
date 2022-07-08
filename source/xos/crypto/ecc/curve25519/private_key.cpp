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
///   File: private_key.cpp
///
/// Author: $author$
///   Date: 7/6/2022
///////////////////////////////////////////////////////////////////////
#include "xos/crypto/ecc/curve25519/private_key.hpp"

#if !defined(XOS_CRYPTO_ECC_CURVE25519_PRIVATE_KEY_INSTANCE)
///#define XOS_CRYPTO_ECC_CURVE25519_PRIVATE_KEY_INSTANCE
#endif /// !defined(XOS_CRYPTO_ECC_CURVE25519_PRIVATE_KEY_INSTANCE)

namespace xos {
namespace crypto {
namespace ecc {
namespace curve25519 {

///  Class: private_keyt
#if defined(XOS_CRYPTO_ECC_CURVE25519_PRIVATE_KEY_INSTANCE)
static private_key the_private_key;
#endif /// defined(XOS_CRYPTO_ECC_CURVE25519_PRIVATE_KEY_INSTANCE)


} /// namespace curve25519
} /// namespace ecc
} /// namespace crypto
} /// namespace xos
