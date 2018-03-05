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
///   Date: 3/4/2018
///////////////////////////////////////////////////////////////////////
#ifndef _NUMERA_CONSOLE_MAIN_OPT_HPP
#define _NUMERA_CONSOLE_MAIN_OPT_HPP

#include "numera/base/base.hpp"
#include "xos/base/getopt/main.hpp"

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define NUMERA_MAIN_OPT_ARGUMENT_NONE XOS_MAIN_OPT_ARGUMENT_NONE
#define NUMERA_MAIN_OPT_ARGUMENT_REQUIRED XOS_MAIN_OPT_ARGUMENT_REQUIRED
#define NUMERA_MAIN_OPT_ARGUMENT_OPTIONAL XOS_MAIN_OPT_ARGUMENT_OPTIONAL

#define NUMERA_MAIN_LOGGING_OPTVAL_C XOS_MAIN_LOGGING_OPTVAL_C
#define NUMERA_MAIN_LOGGING_OPTARG XOS_MAIN_LOGGING_OPTARG
#define NUMERA_MAIN_LOGGING_OPTUSE XOS_MAIN_LOGGING_OPTUSE

#define NUMERA_MAIN_HELP_OPTVAL_C XOS_MAIN_HELP_OPTVAL_C
#define NUMERA_MAIN_HELP_OPTARG XOS_MAIN_HELP_OPTARG
#define NUMERA_MAIN_HELP_OPTUSE XOS_MAIN_HELP_OPTUSE

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPT "logging"
#define NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_RESULT 0
#define NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG NUMERA_MAIN_LOGGING_OPTARG
#define NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTUSE NUMERA_MAIN_LOGGING_OPTUSE
#define NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_S "l:"
#define NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C 'l'
#define NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTION \
   {NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPT, \
    NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_REQUIRED, \
    NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG_RESULT, \
    NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C}, \

#define NUMERA_CONSOLE_MAIN_HELP_OPT "help"
#define NUMERA_CONSOLE_MAIN_HELP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define NUMERA_CONSOLE_MAIN_HELP_OPTARG_RESULT 0
#define NUMERA_CONSOLE_MAIN_HELP_OPTARG NUMERA_MAIN_HELP_OPTARG
#define NUMERA_CONSOLE_MAIN_HELP_OPTUSE NUMERA_MAIN_HELP_OPTUSE
#define NUMERA_CONSOLE_MAIN_HELP_OPTVAL_S "?"
#define NUMERA_CONSOLE_MAIN_HELP_OPTVAL_C '?'
#define NUMERA_CONSOLE_MAIN_HELP_OPTION \
   {NUMERA_CONSOLE_MAIN_HELP_OPT, \
    NUMERA_CONSOLE_MAIN_HELP_OPTARG_REQUIRED, \
    NUMERA_CONSOLE_MAIN_HELP_OPTARG_RESULT, \
    NUMERA_CONSOLE_MAIN_HELP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define NUMERA_CONSOLE_MAIN_OPTIONS_CHARS \
    NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_S \
    NUMERA_CONSOLE_MAIN_HELP_OPTVAL_S \

#define NUMERA_CONSOLE_MAIN_OPTIONS_OPTIONS \
    NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTION \
    NUMERA_CONSOLE_MAIN_HELP_OPTION \

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

namespace numera {

///////////////////////////////////////////////////////////////////////
/// Enum: main_opt_argument_t
///////////////////////////////////////////////////////////////////////
typedef int main_opt_argument_t;
enum {
    MAIN_OPT_ARGUMENT_NONE     = NUMERA_MAIN_OPT_ARGUMENT_NONE,
    MAIN_OPT_ARGUMENT_REQUIRED = NUMERA_MAIN_OPT_ARGUMENT_REQUIRED,
    MAIN_OPT_ARGUMENT_OPTIONAL = NUMERA_MAIN_OPT_ARGUMENT_OPTIONAL
};

namespace console {

typedef ::xos::base::getopt::main_implements main_opt_implements;
typedef ::xos::base::getopt::main main_opt_extends;
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

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_logging_levels_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = this->on_logging_option
        (NUMERA_MAIN_LOGGING_OPTVAL_C,
         optarg, optname, optind, argc, argv, env);
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual int on_help_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = this->usage(argc, argv, env);
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = 0;
        switch(optval) {
        case NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C:
            err = on_logging_levels_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case NUMERA_CONSOLE_MAIN_HELP_OPTVAL_C:
            err = on_help_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = Extends::on_option
            (optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char* option_usage
    (const char*& optarg, const struct option* longopt) {
        const char* chars = "";
        switch(longopt->val) {
        case NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTVAL_C:
            optarg = NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTARG;
            chars = NUMERA_CONSOLE_MAIN_LOGGING_LEVELS_OPTUSE;
            break;
        case NUMERA_CONSOLE_MAIN_HELP_OPTVAL_C:
            optarg = NUMERA_CONSOLE_MAIN_HELP_OPTARG;
            chars = NUMERA_CONSOLE_MAIN_HELP_OPTUSE;
            break;
        default:
            chars = Extends::option_usage(optarg, longopt);
        }
        return chars;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char* options(const struct option*& longopts) {
        int err = 0;
        static const char* chars = NUMERA_CONSOLE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            NUMERA_CONSOLE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace console 

namespace app {
namespace console {

typedef numera::console::main_opt_implements main_opt_implements;
typedef numera::console::main_opt main_opt;

} // namespace console 
} // namespace app 

} // namespace numera 

#endif // _NUMERA_CONSOLE_MAIN_OPT_HPP 
