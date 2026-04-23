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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 3/8/2018
///////////////////////////////////////////////////////////////////////
#ifndef _NUMERA_CONSOLE_MP_MAIN_OPT_HPP
#define _NUMERA_CONSOLE_MP_MAIN_OPT_HPP

#include "numera/console/main.hpp"

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPT "mp-integer"
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_RESULT 0
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_BN "(b)BIGNUM"
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_MP "(p)MP_INT"
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_MBU "(u)MB_UINT"
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_NULL "(n)null"
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG \
    "{ " NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_BN \
    " | " NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_MP \
    " | " NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_MBU \
    " | " NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_NULL " }"
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTUSE ""
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTVAL_S "m:"
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTVAL_C 'm'
#define NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTION \
   {NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPT, \
    NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_REQUIRED, \
    NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_RESULT, \
    NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define NUMERA_CONSOLE_MP_MAIN_OPTIONS_CHARS \
   NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTVAL_S \
   NUMERA_CONSOLE_MAIN_OPTIONS_CHARS

#define NUMERA_CONSOLE_MP_MAIN_OPTIONS_OPTIONS \
   NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTION \
   NUMERA_CONSOLE_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define NUMERA_CONSOLE_MP_MAIN_ARGS 0
#define NUMERA_CONSOLE_MP_MAIN_ARGV

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

namespace numera {
namespace console {
namespace mp {

typedef console::main_implements main_opt_implements;
typedef console::main main_opt_extends;
///////////////////////////////////////////////////////////////////////
///  Class: main_opt
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main_opt
: virtual public main_opt_implements, public main_opt_extends {
public:
    typedef main_opt_implements Implements;
    typedef main_opt_extends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    main_opt() {
    }
    virtual ~main_opt() {
    }
private:
    main_opt(const main_opt& copy) {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_mp_bn_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_mp_mp_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_mp_mb_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_mp_null_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_mp_integer_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(optarg[0] != NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_BN[1])) {
                err = this->on_mp_bn_integer_option
                (optval,optarg,optname,optind,argc,argv,env);
            } else {
                if (!(optarg[0] != NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_MP[1])) {
                    err = this->on_mp_mp_integer_option
                    (optval,optarg,optname,optind,argc,argv,env);
                } else {
                    if (!(optarg[0] != NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_MBU[1])) {
                        err = this->on_mp_mb_integer_option
                        (optval,optarg,optname,optind,argc,argv,env);
                    } else {
                        if (!(optarg[0] != NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG_NULL[1])) {
                            err = this->on_mp_null_integer_option
                            (optval,optarg,optname,optind,argc,argv,env);
                        } else {
                            err = this->on_invalid_option_arg
                            (optval,optarg,optname,optind,argc,argv,env);
                        }
                    }
                }
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_option
    (int optval, const char_t* optarg,
     const char_t* optname, int optind,
     int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTVAL_C:
            err = on_mp_integer_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = Extends::on_option
            (optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* option_usage
    (const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTVAL_C:
            optarg = NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTARG;
            chars = NUMERA_CONSOLE_MP_MAIN_MP_INTEGER_OPTUSE;
            break;
        default:
            chars = Extends::option_usage(optarg, longopt);
        }
        return chars;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* options(const struct option*& longopts) {
        int err = 0;
        static const char_t* chars = NUMERA_CONSOLE_MP_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            NUMERA_CONSOLE_MP_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = NUMERA_CONSOLE_MP_MAIN_ARGS;
        static const char_t* _argv[] = {
            NUMERA_CONSOLE_MP_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace mp 
} // namespace console 
} // namespace numera 

#endif // _NUMERA_CONSOLE_MP_MAIN_OPT_HPP 
