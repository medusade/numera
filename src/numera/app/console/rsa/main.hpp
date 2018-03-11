///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2018 $organization$
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
///   Date: 3/10/2018
///////////////////////////////////////////////////////////////////////
#ifndef _NUMERA_APP_CONSOLE_RSA_MAIN_HPP
#define _NUMERA_APP_CONSOLE_RSA_MAIN_HPP

#include "numera/console/mp/main.hpp"
#include "numera/mp/mp/unsigned_integer.hpp"
#include "numera/mp/bn/unsigned_integer.hpp"
#include "numera/mp/unsigned_integer.hpp"

namespace numera {
namespace app {
namespace console {
namespace rsa {

///
/// modbytes min/max
///
enum {
    modbytes_min = 512/8,
    modbytes_max = 4096/8
};

///
/// public
///
const byte_t exponent[] = {
    0x01, 0x00, 0x01,
};
const byte_t modulus[] = {
    0xb7, 0x2f, 0x32, 0x9f, 0x50, 0x8e, 0xee, 0x70, 0xe4, 0xae, 0xb4, 0xbf, 0x40, 0x76, 0x58, 0x03,
    0xc5, 0x1c, 0x7e, 0xfe, 0x0f, 0xe4, 0xb5, 0xd0, 0x66, 0x4a, 0x47, 0xff, 0x57, 0x07, 0x59, 0x7f,
    0x57, 0xdc, 0xb8, 0xa8, 0x78, 0xf6, 0x51, 0x0b, 0x9c, 0xde, 0xa2, 0xb6, 0xc0, 0x30, 0x08, 0x0c,
    0xe3, 0x06, 0x64, 0xf7, 0xf8, 0x88, 0xe0, 0x12, 0xa6, 0x4a, 0x99, 0x33, 0x55, 0x34, 0x76, 0x03,
    0x6c, 0xc3, 0x6d, 0xe7, 0xe9, 0x87, 0x04, 0xdc, 0xdd, 0xbf, 0x49, 0x7e, 0xdc, 0x17, 0x57, 0x41,
    0x0d, 0x02, 0x12, 0x9c, 0xad, 0x9e, 0x7b, 0x32, 0xa6, 0x4e, 0xf2, 0x37, 0x36, 0x76, 0x18, 0xbf,
    0xf3, 0xb2, 0x3e, 0x92, 0x9d, 0xb2, 0x79, 0xa4, 0xf4, 0x25, 0x11, 0x97, 0x9c, 0xac, 0x36, 0x8e,
    0xe9, 0x4b, 0xf3, 0x8b, 0xa8, 0x26, 0x67, 0x4e, 0xb5, 0xa4, 0x5f, 0xbd, 0x80, 0x0b, 0x82, 0x9d,
    0x32, 0x72, 0x49, 0x3d, 0x79, 0x7b, 0x59, 0x91, 0x73, 0x21, 0xe6, 0xb6, 0x86, 0x35, 0xf6, 0xa5,
    0x05, 0x0e, 0x0c, 0x51, 0xd5, 0x53, 0x76, 0xc2, 0x5a, 0x64, 0x6e, 0xd7, 0x09, 0xa8, 0xef, 0x07,
    0x02, 0xdb, 0x5a, 0xe6, 0x8a, 0xfa, 0x10, 0xad, 0xb5, 0xc5, 0x0e, 0x46, 0x53, 0xce, 0x37, 0x9f,
    0x60, 0x2b, 0x21, 0xff, 0x15, 0x94, 0xc6, 0x94, 0x76, 0xda, 0x9a, 0x9f, 0x3b, 0x95, 0x21, 0x25,
    0x97, 0xfb, 0xb7, 0x8e, 0x61, 0xc4, 0x8f, 0x7b, 0x58, 0xe8, 0x3c, 0x06, 0x07, 0x4d, 0x4e, 0x94,
    0x3b, 0xf7, 0xe5, 0xbe, 0x47, 0xb8, 0xee, 0xf4, 0xd1, 0xf4, 0x88, 0x2e, 0xaf, 0x47, 0x1e, 0xfd,
    0xef, 0x72, 0x29, 0xa0, 0x00, 0xad, 0x90, 0x4b, 0xeb, 0x5f, 0x30, 0xc8, 0xc4, 0x58, 0x28, 0xe5,
    0x78, 0x90, 0x71, 0x6a, 0xa2, 0xe3, 0xfa, 0x50, 0xd2, 0x4e, 0x75, 0x90, 0xac, 0xe4, 0xbe, 0x57
};
///
/// private
///
const byte_t d[] = {
    0x7f, 0x09, 0xe2, 0x67, 0x8e, 0x2c, 0xb1, 0xbb, 0xe5, 0x3c, 0x2b, 0xe9, 0x7e, 0xc1, 0x13, 0xe4,
    0xf9, 0x6b, 0xfb, 0xbe, 0x22, 0x33, 0x90, 0xcb, 0x88, 0x44, 0xf7, 0x8d, 0x63, 0x43, 0x9b, 0x93,
    0xae, 0xd1, 0x49, 0xd6, 0xbc, 0x9c, 0xc6, 0x33, 0xf1, 0x84, 0x8c, 0xff, 0x84, 0x65, 0x4b, 0x0f,
    0xf4, 0xd9, 0xd8, 0x68, 0x08, 0x1a, 0x94, 0x9b, 0x1a, 0x6c, 0x1d, 0xb6, 0xf5, 0xde, 0x3e, 0x01,
    0xbe, 0x0a, 0x02, 0x4c, 0x95, 0x2d, 0xa7, 0xf7, 0xac, 0x69, 0x1e, 0x85, 0x36, 0x09, 0x91, 0xdf,
    0x71, 0x30, 0x00, 0xcc, 0x5b, 0xb3, 0xce, 0xe8, 0x9f, 0x61, 0x9c, 0xa5, 0x21, 0xc5, 0xe1, 0x00,
    0x2d, 0xf7, 0x6d, 0x61, 0xac, 0xaf, 0xbb, 0xa0, 0xe4, 0x18, 0x59, 0x0c, 0xf6, 0x00, 0x90, 0x8d,
    0xa7, 0xc9, 0x9e, 0x8b, 0x39, 0xff, 0xf8, 0x21, 0x23, 0xe3, 0x6c, 0xea, 0x34, 0xc4, 0xc6, 0xbd,
    0x24, 0x85, 0xca, 0x90, 0x9b, 0xef, 0xff, 0x93, 0x46, 0x5e, 0x0a, 0x1d, 0x19, 0x6c, 0x1d, 0x08,
    0xc5, 0xde, 0x53, 0x1d, 0x68, 0xb0, 0x42, 0xaa, 0xb5, 0x99, 0x81, 0xeb, 0x49, 0xb6, 0x96, 0xb0,
    0x48, 0xa9, 0xa2, 0x5e, 0x23, 0x86, 0x16, 0xd5, 0x49, 0x9f, 0xd5, 0x84, 0x5c, 0xb0, 0x4e, 0x4b,
    0xd0, 0xf3, 0xb1, 0x4a, 0xbd, 0xac, 0x41, 0x46, 0xa6, 0x3c, 0xae, 0xbc, 0xfd, 0x72, 0x48, 0x63,
    0xec, 0xef, 0x25, 0x92, 0xbc, 0xc2, 0xe7, 0xb4, 0x3e, 0x42, 0xc5, 0xca, 0x93, 0x35, 0x51, 0xe3,
    0xb4, 0xe0, 0x03, 0x45, 0xb4, 0x42, 0xcc, 0x8d, 0x60, 0x7d, 0x10, 0x5a, 0xfc, 0x1d, 0x59, 0xfb,
    0x18, 0x49, 0x7c, 0x42, 0xa3, 0x7a, 0x49, 0x1e, 0x38, 0xa2, 0xa1, 0x4d, 0xeb, 0x40, 0x69, 0x3e,
    0x9f, 0x24, 0xcf, 0x17, 0x1a, 0x5d, 0xc3, 0xeb, 0xef, 0xc3, 0xa8, 0x6d, 0xd3, 0x50, 0x24, 0x21
};
const byte_t p[] = {
    0xea, 0xe2, 0xe1, 0xa2, 0x0b, 0xdf, 0x43, 0xdf, 0x54, 0x81, 0xca, 0x24, 0xe0, 0xdf, 0x5c, 0x9a,
    0xc5, 0xaf, 0xbc, 0xb3, 0x69, 0xc8, 0x22, 0x90, 0x3c, 0xa6, 0xfc, 0xe3, 0x58, 0x60, 0xcf, 0xba,
    0x35, 0xc1, 0x00, 0x33, 0xd7, 0x7c, 0x1b, 0x76, 0x2d, 0xe2, 0xf5, 0xbc, 0xfb, 0xa6, 0x72, 0x08,
    0x00, 0x0f, 0xfb, 0xa1, 0xde, 0x87, 0x5d, 0xcf, 0x18, 0x7a, 0xbe, 0xc6, 0xe3, 0x10, 0x64, 0x28,
    0xf5, 0xd7, 0xe7, 0x95, 0xe0, 0x65, 0x98, 0x39, 0x8b, 0x69, 0x64, 0x56, 0x50, 0x7c, 0x6b, 0xbc,
    0xc4, 0x18, 0xab, 0xb8, 0x87, 0x11, 0xc6, 0x7d, 0x40, 0xee, 0xd6, 0xa6, 0xd5, 0x2e, 0x34, 0x6d,
    0x16, 0x68, 0xef, 0x7d, 0x32, 0x2d, 0x59, 0x97, 0x84, 0xfd, 0x38, 0x90, 0xde, 0x05, 0x09, 0x26,
    0x48, 0x55, 0x3e, 0xd6, 0xc5, 0x62, 0x28, 0xb2, 0x4a, 0xd7, 0x69, 0xa0, 0x39, 0x6e, 0x8c, 0xd9
};
const byte_t q[] = {
    0xc7, 0xa6, 0x92, 0x2a, 0x1e, 0xe5, 0x97, 0xaa, 0x67, 0x41, 0x6c, 0xed, 0x8c, 0xa3, 0x67, 0x9f,
    0xa3, 0xfb, 0x79, 0xfd, 0x0c, 0x5b, 0x15, 0x7f, 0xf7, 0xcc, 0x40, 0x0d, 0xdf, 0xee, 0x6a, 0x71,
    0xdb, 0x18, 0x3d, 0xed, 0x9e, 0x4d, 0x10, 0xb2, 0x31, 0xb5, 0xbd, 0x15, 0xc9, 0x18, 0x83, 0x68,
    0x72, 0xfa, 0x58, 0x2d, 0x12, 0xdf, 0xdb, 0xe8, 0x1f, 0xd2, 0xad, 0xc0, 0x03, 0x16, 0x7f, 0xa5,
    0xa5, 0xd9, 0xf1, 0xb0, 0x1a, 0x3d, 0xa1, 0x35, 0x21, 0x30, 0x8c, 0xb2, 0xb7, 0x5e, 0x58, 0xed,
    0x9f, 0x58, 0xb8, 0x5f, 0xac, 0x65, 0x3a, 0xdf, 0x8f, 0x6e, 0x6e, 0x8f, 0x29, 0x0d, 0x7e, 0x2e,
    0x77, 0xca, 0xcd, 0xcf, 0x4f, 0x9d, 0xd3, 0x8b, 0xd3, 0x07, 0xb0, 0xf3, 0xbb, 0x36, 0x11, 0x86,
    0x40, 0x94, 0x84, 0x76, 0xdc, 0x51, 0xc2, 0x9a, 0xc1, 0xd2, 0x17, 0x1d, 0xff, 0x54, 0x66, 0xaf
};
const byte_t dmp1[] = {
    0x24, 0xf6, 0x48, 0xfd, 0x60, 0x12, 0xe5, 0x32, 0x5a, 0xb1, 0x05, 0xe7, 0x61, 0xbf, 0xa4, 0x69,
    0xf2, 0x9b, 0xe1, 0xfc, 0xf5, 0xb3, 0x79, 0xc4, 0xea, 0xd6, 0x78, 0x4b, 0x2a, 0x58, 0x29, 0xb8,
    0x2a, 0xc7, 0x51, 0x49, 0xd7, 0x29, 0xff, 0x84, 0x4c, 0x5a, 0x3f, 0xc3, 0x5a, 0x72, 0x69, 0xd5,
    0x5a, 0x75, 0x29, 0x6a, 0xe2, 0x82, 0xb8, 0xbf, 0x63, 0x21, 0xc5, 0xad, 0xb4, 0x83, 0x9a, 0xcf,
    0x5b, 0x48, 0x7b, 0x77, 0xf9, 0x54, 0xe3, 0x6c, 0x82, 0xc4, 0xb5, 0xf6, 0x63, 0x3a, 0x01, 0x16,
    0x36, 0x61, 0x8f, 0x7c, 0x3d, 0x3d, 0x0d, 0xd8, 0x1e, 0x04, 0xb7, 0xa0, 0x8f, 0x41, 0x73, 0x1c,
    0x8b, 0x7f, 0x3d, 0xd8, 0x9c, 0xb1, 0xc8, 0x3c, 0x70, 0xc0, 0x0c, 0x4b, 0xb7, 0xb4, 0x61, 0x29,
    0x36, 0x0e, 0xbc, 0x11, 0xbe, 0x03, 0xe1, 0x55, 0x95, 0x33, 0x6a, 0xba, 0xbc, 0xee, 0xe9, 0x99
};
const byte_t dmq1[] = {
    0x4c, 0xb9, 0xe4, 0xfe, 0x2e, 0xf5, 0x88, 0xfd, 0xc1, 0xc4, 0xd0, 0xf9, 0xd1, 0xcc, 0x92, 0x6c,
    0x35, 0x76, 0xd5, 0x80, 0xbc, 0x18, 0xdd, 0x00, 0x5a, 0xd8, 0xb1, 0xdd, 0x23, 0x2b, 0xda, 0xd8,
    0x7a, 0x9c, 0xac, 0x5f, 0xff, 0x30, 0x1a, 0xb4, 0x80, 0x8a, 0x19, 0x6a, 0x9f, 0xe7, 0xbd, 0xc8,
    0x8c, 0x37, 0x4d, 0x5f, 0xb5, 0x1b, 0x36, 0xc5, 0xd4, 0x45, 0x00, 0xe5, 0x03, 0xca, 0xc7, 0xaf,
    0x7f, 0x37, 0x6c, 0xbc, 0x82, 0xb9, 0x20, 0x94, 0xec, 0x76, 0x5d, 0xfb, 0xe8, 0xa0, 0x67, 0x88,
    0x9a, 0x6e, 0x5c, 0x1c, 0xd8, 0x81, 0xe6, 0xc8, 0x37, 0xb4, 0xf6, 0xe4, 0x29, 0xa0, 0xb7, 0xd7,
    0x5f, 0xce, 0x1e, 0x9e, 0x07, 0x38, 0xde, 0x2d, 0xa4, 0x22, 0x16, 0x8c, 0xf4, 0x6b, 0x68, 0xfc,
    0xb1, 0x20, 0xe2, 0x6f, 0x53, 0x68, 0x50, 0x63, 0x6d, 0x0d, 0x32, 0x39, 0x23, 0x00, 0xea, 0x9d
};
const byte_t iqmp[] = {
    0xc6, 0x1b, 0x6b, 0xd7, 0xa0, 0xb2, 0x2c, 0x4f, 0x18, 0xb6, 0x7c, 0x63, 0xe1, 0x94, 0xb7, 0x24,
    0xda, 0x33, 0x9d, 0x1b, 0xf1, 0xec, 0xb6, 0xb7, 0x58, 0xd9, 0x8e, 0x30, 0xc6, 0x6f, 0x2e, 0x9e,
    0x72, 0x15, 0xde, 0x63, 0x7b, 0x6a, 0x13, 0xde, 0xed, 0x65, 0xb7, 0x60, 0xb2, 0xe6, 0xbc, 0x8a,
    0xcb, 0x54, 0x96, 0x68, 0x6a, 0x74, 0x86, 0x1a, 0xb6, 0x4a, 0xe3, 0x59, 0x5b, 0xf9, 0x67, 0x69,
    0x0b, 0x08, 0xe4, 0xe6, 0x97, 0xe8, 0xc0, 0x20, 0xfe, 0x92, 0x72, 0xc0, 0xf1, 0xa4, 0x30, 0xa2,
    0x7c, 0x3e, 0x72, 0x27, 0xb6, 0xe0, 0xeb, 0x50, 0x50, 0xd4, 0x18, 0x10, 0xf4, 0x2d, 0x33, 0x6d,
    0x9e, 0x83, 0x12, 0x99, 0xe4, 0x2e, 0x41, 0x88, 0x04, 0x36, 0x64, 0xa3, 0x8c, 0x90, 0xea, 0x12,
    0xd4, 0x13, 0x16, 0x83, 0x53, 0x12, 0x1a, 0x16, 0xe0, 0xb7, 0xdc, 0xe0, 0x17, 0x7c, 0xc7, 0x80
};

byte_t plain[modbytes_max], 
       cipher[modbytes_max], 
       decipher[modbytes_max];

typedef numera::console::mp::main_implements main_implements;
typedef numera::console::mp::main main_extends;
///////////////////////////////////////////////////////////////////////
///  Class: main
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main: virtual public main_implements, public main_extends {
public:
    typedef main_implements implements;
    typedef main_extends extends;
    typedef main derives;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main() {
    }
    virtual ~main() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    int (derives::*run_)(int argc, char** argv, char** env);
    virtual int run(int argc, char** argv, char** env) {
        int err = 0;
        time_t t = 0;

        ::srand(::time(&t));
        //::srand(1984);

        LOG_DEBUG("try {...");
        try {
            if ((run_)) {
                err = (this->*run_)(argc, argv, env);
            } else {
                err = run_default(argc, argv, env);
            }
            LOG_DEBUG("...} try");
        } catch (...) {
            LOG_DEBUG("...catch (...)");
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run_bn(int argc, char** argv, char** env) {
        int err = 0;
        numera::mp::bn::unsigned_integer
                exponent(rsa::exponent, sizeof(rsa::exponent)),
                modulus(rsa::modulus, sizeof(rsa::modulus)),
                d(rsa::d, sizeof(rsa::d)), p(rsa::p, sizeof(rsa::p)), q(rsa::q, sizeof(rsa::q)),
                dmp1(rsa::dmp1, sizeof(rsa::dmp1)), dmq1(rsa::dmq1, sizeof(rsa::dmq1)), iqmp(rsa::iqmp, sizeof(rsa::iqmp));
        err = this->run_rsa(exponent, modulus, d, p, q, dmp1, dmq1, iqmp);
        return err;
    }
    virtual int run_mp(int argc, char** argv, char** env) {
        int err = 0;
        numera::mp::mp::unsigned_integer
                exponent(rsa::exponent, sizeof(rsa::exponent)),
                modulus(rsa::modulus, sizeof(rsa::modulus)),
                d(rsa::d, sizeof(rsa::d)), p(rsa::p, sizeof(rsa::p)), q(rsa::q, sizeof(rsa::q)),
                dmp1(rsa::dmp1, sizeof(rsa::dmp1)), dmq1(rsa::dmq1, sizeof(rsa::dmq1)), iqmp(rsa::iqmp, sizeof(rsa::iqmp));
        err = this->run_rsa(exponent, modulus, d, p, q, dmp1, dmq1, iqmp);
        return err;
    }
    virtual int run_mb(int argc, char** argv, char** env) {
        int err = 0;
        err = this->run_unimplemented(argc, argv, env);
        return err;
    }
    virtual int run_null(int argc, char** argv, char** env) {
        int err = 0;
        err = this->run_unimplemented(argc, argv, env);
        return err;
    }
    virtual int run_unimplemented(int argc, char** argv, char** env) {
        int err = 1;
        LOG_ERROR("...unimplemented");
        return err;
    }
    virtual int run_default(int argc, char** argv, char** env) {
        int err = 0;
        err = this->run_bn(argc, argv, env);
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    //typedef numera::mp::bn::unsigned_integer mp_uint;
    //typedef numera::mp::mp::unsigned_integer mp_uint;
    template <typename mp_uint>
    int run_rsa
    (mp_uint& exponent, mp_uint& modulus, 
     mp_uint& d, mp_uint& p, mp_uint& q, 
     mp_uint& dmp1, mp_uint& dmq1, mp_uint& iqmp) {
        int err = 0;
        ssize_t size = 0; 
        ssize_t modbytes = sizeof(rsa::modulus);
        
        if ((modbytes >= modbytes_min) && (modbytes <= modbytes_max)) {

            if ((size = this->random(plain, modbytes))) {
                mp_uint out, in;
                
                plain[0] = 0;
                this->out("plain = ");
                this->outx(plain, modbytes);
                this->outln();
                this->outln();
                
                if (modbytes == (size = in.set_msb(plain, modbytes))) {

                    // out = in ^ exponent mod modulus
                    //
                    out.mod_exp(out, in, exponent, modulus);
    
                    if (modbytes == (size = out.get_msb(cipher, modbytes))) {
                        this->out("cipher = ");
                        this->outx(cipher, modbytes);
                        this->outln();
                        this->outln();
                        
                        if (modbytes == (size = in.set_msb(cipher, modbytes))) {
                            bool subtracted_p = false;
                            mp_uint ptemp, qtemp, temp;
            
                            // Compute q2 = (in mod q) ^ dmq1 mod q.
                            //
                            out.mod(out,in,q);
                            out.mod_exp(qtemp,out,dmq1,q);
            
                            // Compute p2 = (in mod p) ^ dmp1 mod p.
                            //
                            out.mod(out,in,p);
                            out.mod_exp(ptemp,out,dmp1,p);
            
                            // if q2 > p then q2 = q2 - p
                            //
                            if ((subtracted_p = (out.compare(qtemp,p) > 0))) {
                                out.sub(qtemp,qtemp,p);
                            }

                            // Compute k = (((p2 + p) - q2) mod p) * iqmp mod p.
                            //
                            out.add(temp,ptemp,p);
                            out.sub(temp,temp,qtemp);
                            out.mul(ptemp,temp,iqmp);
                            out.mod(temp,ptemp,p);
            
                            // Compute value = q2 + q * k.
                            //
                            out.mul(ptemp,temp,q);
                            out.add(temp,ptemp,qtemp);
            
                            // if we subtracted p before then add it back here
                            //
                            if (subtracted_p) {
                                out.add(temp,temp,p);
                            }
    
                            if (modbytes == (size = temp.get_msb(decipher, modbytes))) {
                                this->out("decipher = ");
                                this->outx(decipher, modbytes);
                                this->outln();
                                this->outln();
                                
                                if (0 == (memcmp(plain, decipher, modbytes))) {
                                    this->outln("success");
                                } else {
                                    this->outln("failure");
                                }
                            }
                        }
                    }
                }
            }
        }    
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_mp_bn_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->run_ = &derives::run_bn;
        return err;
    }
    virtual int on_mp_mp_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->run_ = &derives::run_mp;
        return err;
    }
    virtual int on_mp_mb_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->run_ = &derives::run_mb;
        return err;
    }
    virtual int on_mp_null_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->run_ = &derives::run_null;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace rsa 
} // namespace console 
} // namespace app 
} // namespace numera 

#endif // _NUMERA_APP_CONSOLE_RSA_MAIN_HPP 

        

