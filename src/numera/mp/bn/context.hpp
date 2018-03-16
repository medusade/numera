///////////////////////////////////////////////////////////////////////
/// Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)
/// All rights reserved.
/// 
/// This package is an SSL implementation written
/// by Eric Young (eay@cryptsoft.com).
/// The implementation was written so as to conform with Netscapes SSL.
/// 
/// This library is free for commercial and non-commercial use as long as
/// the following conditions are aheared to.  The following conditions
/// apply to all code found in this distribution, be it the RC4, RSA,
/// lhash, DES, etc., code; not just the SSL code.  The SSL documentation
/// included with this distribution is covered by the same copyright terms
/// except that the holder is Tim Hudson (tjh@cryptsoft.com).
/// 
/// Copyright remains Eric Young's, and as such any Copyright notices in
/// the code are not to be removed.
/// If this package is used in a product, Eric Young should be given attribution
/// as the author of the parts of the library used.
/// This can be in the form of a textual message at program startup or
/// in documentation (online or textual) provided with the package.
/// 
/// Redistribution and use in source and binary forms, with or without
/// modification, are permitted provided that the following conditions
/// are met:
/// 1. Redistributions of source code must retain the copyright
///    notice, this list of conditions and the following disclaimer.
/// 2. Redistributions in binary form must reproduce the above copyright
///    notice, this list of conditions and the following disclaimer in the
///    documentation and/or other materials provided with the distribution.
/// 3. All advertising materials mentioning features or use of this software
///    must display the following acknowledgement:
///    "This product includes cryptographic software written by
///     Eric Young (eay@cryptsoft.com)"
///    The word 'cryptographic' can be left out if the rouines from the library
///    being used are not cryptographic related :-).
/// 4. If you include any Windows specific code (or a derivative thereof) from
///    the apps directory (application code) you must include an acknowledgement:
///    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
/// 
/// THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
/// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
/// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
/// ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
/// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
/// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
/// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
/// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
/// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
/// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
/// SUCH DAMAGE.
/// 
/// The licence and distribution terms for any publically available version or
/// derivative of this code cannot be changed.  i.e. this code cannot simply be
/// copied and put under another distribution licence
/// [including the GNU Public Licence.]
///
///   File: context.hpp
///
/// Author: $author$
///   Date: 3/13/2018
///////////////////////////////////////////////////////////////////////
#ifndef _NUMERA_MP_BN_CONTEXT_HPP
#define _NUMERA_MP_BN_CONTEXT_HPP

#include "numera/base/base.hpp"
#include "bn_msb.h"

namespace numera {
namespace mp {
namespace bn {

///////////////////////////////////////////////////////////////////////
///  Class: contextt
///////////////////////////////////////////////////////////////////////
template
<typename TAttachedTo = BN_CTX*, 
 typename TUnattached = int, TUnattached VUnattached = 0,
 class TImplementBase = implement_base, class TBase = base,

 class TCreator = ::xos::base::creatort<TImplementBase>,

 class TAttacher = ::xos::base::attachert
 <TAttachedTo, TUnattached, VUnattached, TCreator>,

 class TAttached = ::xos::base::attachedt
 <TAttachedTo, TUnattached, VUnattached, TAttacher, TBase>,

 class TCreated = ::xos::base::createdt
 <TAttachedTo, TUnattached, VUnattached, TAttacher, TAttached>,

 class TImplements = TAttacher, class TExtends = TCreated>

class _EXPORT_CLASS contextt: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    contextt(const contextt& copy) {
        const creator_exception e = failed_to_create;
        LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
        throw(e);
    }
    contextt() {
        this->init();
        if (!(this->create())) {
            const creator_exception e = failed_to_create;
            this->fini();
            LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
            throw(e);
        }        
    }
    virtual ~contextt() {
        if (!(this->destroyed())) {
            const creator_exception e = failed_to_destroy;
            this->fini();
            LOG_ERROR("...this->destroyed() failed throw(const creator_exception e = failed_to_destroy)...");
            throw(e);
        }
        this->fini();
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual bool create() {
        if ((this->destroyed())) {
            BN_CTX* detached = 0;
            LOG_DEBUG("detached = ::BN_CTX_new()...");
            if ((detached = ::BN_CTX_new())) {
                this->attach_created(detached);
                return true;
            } else {
                LOG_ERROR("...failed on detached = BN_new()");
            }
        }
        return false;
    }
    virtual bool destroy() {
        bool success = true;
        BN_CTX* detached = 0;
        if ((detached = this->detach())) {
            LOG_DEBUG("::BN_CTX_free(detached)...");
            ::BN_CTX_free(detached);
        }
        return success;
    }
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void init() {
    }
    virtual void fini() {
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual operator BN_CTX* () const {
        return (BN_CTX*)(this->attached_to());
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef contextt<> context;

} // namespace bn 
} // namespace mp 
} // namespace numera 

#endif // _NUMERA_MP_BN_CONTEXT_HPP 
