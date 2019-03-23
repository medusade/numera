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
///   Date: 3/5/2018
///////////////////////////////////////////////////////////////////////
#ifndef _NUMERA_APP_CONSOLE_NUMERA_MAIN_OPT_HPP
#define _NUMERA_APP_CONSOLE_NUMERA_MAIN_OPT_HPP

#include "numera/console/lib/numera/version/main.hpp"
#include "numera/console/mp/main.hpp"

namespace numera {
namespace app {
namespace console {
namespace numera {

typedef ::numera::console::lib::numera::version::maint
< ::numera::console::mp::main::Implements, ::numera::console::mp::main> main_opt_extends;
typedef main_opt_extends::Implements main_opt_implements;
///////////////////////////////////////////////////////////////////////
///  Class: main_opt
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS main_opt: virtual public main_opt_implements, public main_opt_extends {
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

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};

} // namespace numera 
} // namespace console 
} // namespace app 
} // namespace numera 

#endif // _NUMERA_APP_CONSOLE_NUMERA_MAIN_OPT_HPP 
