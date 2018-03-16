///////////////////////////////////////////////////////////////////////
/// Copyright (C) 1991, 1993, 1994, 1995, 1996 Free Software Foundation, Inc.
/// 
/// This file is part of the GNU MP Library.
/// 
/// The GNU MP Library is free software; you can redistribute it and/or modify
/// it under the terms of the GNU Library General Public License as published by
/// the Free Software Foundation; either version 2 of the License, or (at your
/// option) any later version.
/// 
/// The GNU MP Library is distributed in the hope that it will be useful, but
/// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
/// or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
/// License for more details.
/// 
/// You should have received a copy of the GNU Library General Public License
/// along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
/// the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
/// MA 02111-1307, USA.
///
///   File: mpint.hpp
///
/// Author: $author$
///   Date: 3/13/2018
///////////////////////////////////////////////////////////////////////
#ifndef _NUMERA_MP_MP_MPINT_HPP
#define _NUMERA_MP_MP_MPINT_HPP

#include "numera/base/base.hpp"
#include "mpz_msb.h"

namespace numera {
namespace mp {
namespace mp {

///////////////////////////////////////////////////////////////////////
///  Class: mpintt
///////////////////////////////////////////////////////////////////////
template
<typename TAttachedTo = MP_INT*, 
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

class _EXPORT_CLASS mpintt: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    mpintt(const mpintt& copy) {
        this->init();
        if (!(this->create())) {
            const creator_exception e = failed_to_create;
            this->fini();
            LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
            throw(e);
        }        
    }
    mpintt() {
        this->init();
        if (!(this->create())) {
            const creator_exception e = failed_to_create;
            this->fini();
            LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
            throw(e);
        }        
    }
    virtual ~mpintt() {
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
            MP_INT* detached = 0;
            LOG_DEBUG("detached = this->i()...");
            if ((detached = this->i())) {
                LOG_DEBUG("::mpz_set_ui(detached, 0)...");
                ::mpz_set_ui(detached, 0);
                this->attach_created(detached);
                return true;
            } else {
                LOG_ERROR("...failed on detached = this->i()");
            }
        }
        return false;
    }
    virtual bool destroy() {
        bool success = true;
        MP_INT* detached = 0;
        if ((detached = this->detach())) {
            LOG_DEBUG("::mpz_set_ui(detached, 0)...");
            ::mpz_set_ui(detached, 0);
        }
        return success;
    }
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void init() {
        LOG_DEBUG("::mpz_init(&i_)...");
        ::mpz_init(&i_);
        this->fini_ = true;
    }
    virtual void fini() {
        if ((this->fini_)) {
            LOG_DEBUG("::mpz_clear(&i_)...");
            ::mpz_clear(&i_);
            this->fini_ = false;
        }
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual MP_INT* i() const {
        return (MP_INT*)&i_;
    }
    virtual operator MP_INT* () const {
        return (MP_INT*)&i_;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    bool fini_;
    MP_INT i_;
};
typedef mpintt<> mpint;

} // namespace mp 
} // namespace mp 
} // namespace numera 

#endif // _NUMERA_MP_MP_MPINT_HPP 
