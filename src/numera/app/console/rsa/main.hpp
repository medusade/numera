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

#include "numera/app/console/rsa/public.hpp"
#include "numera/app/console/rsa/private.hpp"
#include "numera/console/mp/main.hpp"
#include "numera/mp/mp/unsigned_integer.hpp"
#include "numera/mp/bn/unsigned_integer.hpp"
#include "numera/mp/unsigned_integer.hpp"

namespace numera {
namespace app {
namespace console {
namespace rsa {

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
private:
    main(const main& copy) {
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
                plain[0] &= 0x7f;
                this->out("plain = ");
                this->outx(plain, modbytes);
                this->outln();
                this->outln();
                
                if (modbytes == (size = rsa_private(cipher, plain, modbytes, d,p,q,dmp1,dmq1,iqmp))) {
                    this->out("cipher = ");
                    this->outx(cipher, modbytes);
                    this->outln();
                    this->outln();

                    if (modbytes == (size = rsa_public(decipher, cipher, modbytes, exponent, modulus))) {
                        this->out("decipher = ");
                        this->outx(decipher, modbytes);
                        this->outln();
                        this->outln();
                    }
                    if (0 == (memcmp(plain, decipher, modbytes))) {
                        this->outln("success");
                    } else {
                        this->outln("failure");
                    }
                }
            }
        }    
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    template <typename mp_uint>
    ssize_t rsa_public
    (byte_t cipher[], const byte_t plain[], 
     ssize_t modbytes, mp_uint& exponent, mp_uint& modulus) {
        ssize_t count = 0;

        if ((modbytes >= modbytes_min) && (modbytes <= modbytes_max)) {
            ssize_t size = 0; 
            mp_uint in;

            if (modbytes == (size = in.set_msb(plain, modbytes))) {
                mp_uint out;

                // out = in ^ exponent mod modulus
                //
                out.mod_exp(out, in, exponent, modulus);

                if (modbytes == (size = out.get_msb(cipher, modbytes))) {
                    count = size;
                }
            }
        }
        return count;
    }
    template <typename mp_uint>
    ssize_t rsa_private
    (byte_t cipher[], const byte_t plain[], ssize_t modbytes,
     mp_uint& d, mp_uint& p, mp_uint& q, mp_uint& dmp1, mp_uint& dmq1, mp_uint& iqmp) {
        ssize_t count = 0;
        
        if ((modbytes >= modbytes_min) && (modbytes <= modbytes_max)) {
            ssize_t size = 0; 
            mp_uint in;

            if (modbytes == (size = in.set_msb(plain, modbytes))) {
                bool subtracted_p = false;
                mp_uint out, ptemp, qtemp, temp;

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

                if (modbytes == (size = temp.get_msb(cipher, modbytes))) {
                    count = size;
                }
            }
        }
        return count;
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
protected:
    enum {
        modbytes_min = 512/8,
        modbytes_max = 4096/8
    };
    byte_t plain[modbytes_max], 
           cipher[modbytes_max], 
           decipher[modbytes_max];    
};

} // namespace rsa 
} // namespace console 
} // namespace app 
} // namespace numera 

#endif // _NUMERA_APP_CONSOLE_RSA_MAIN_HPP 

        

