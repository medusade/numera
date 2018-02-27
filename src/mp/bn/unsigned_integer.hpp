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
///   File: unsigned_integer.hpp
///
/// Author: $author$
///   Date: 2/26/2018
///////////////////////////////////////////////////////////////////////
#ifndef _NUMERA_MP_BN_UNSIGNED_INTEGER_HPP
#define _NUMERA_MP_BN_UNSIGNED_INTEGER_HPP

#include "numera/mp/unsigned_integer.hpp"
#include "bn_msb.h"

namespace numera {
namespace mp {
namespace bn {

///////////////////////////////////////////////////////////////////////
///  Class: unsigned_integert
///////////////////////////////////////////////////////////////////////
template 
<class TImplements = mp::unsigned_integer_implement, 
 class TExtends = mp::unsigned_integert<BIGNUM*> >

class _EXPORT_CLASS unsigned_integert: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    typedef unsigned_integert unsigned_integer;
    typedef typename Extends::attached_t attached_t;
    typedef typename Extends::unattached_t unattached_t;
    enum { unattached = Extends::unattached };
    
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    unsigned_integert(const byte_t* msb, size_t msbsize) {
        this->init();
        if (!(this->create_msb(msb, msbsize))) {
            const creator_exception e = failed_to_create;
            LOG_ERROR("...this->create(value = " << x_to_string(msb, msbsize) << ") failed throw(const creator_exception e = failed_to_create)...");
            throw(e);
        }
    }
    unsigned_integert(const unsigned& value) {
        this->init();
        if (!(this->create(value))) {
            const creator_exception e = failed_to_create;
            LOG_ERROR("...this->create(value = " << value << ") failed throw(const creator_exception e = failed_to_create)...");
            throw(e);
        }
    }
    unsigned_integert(const unsigned_integert& copy) {
        this->init();
        if (!(this->create(copy))) {
            const creator_exception e = failed_to_create;
            LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
            throw(e);
        }        
    }
    unsigned_integert() {
        this->init();
        if (!(this->create())) {
            const creator_exception e = failed_to_create;
            LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
            throw(e);
        }        
    }
    virtual ~unsigned_integert() {
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
    virtual bool create_msb(const byte_t* msb, size_t msbsize) {
        if ((msb) && (msbsize)) {
            if ((this->create())) {
                BIGNUM* detached = 0;
                if ((detached = this->attached_to())) {
                    LOG_DEBUG("BN_set_msb(detached, msb = " << x_to_string(msb, msbsize) << ", msbsize = " << msbsize << ")...");
                    BN_set_msb(detached, msb, msbsize);
                    return true;
                }
                this->destroy();
            }
        }
        return false;
    }
    virtual bool create(const unsigned& value) {
        if ((this->create())) {
            BIGNUM* detached = 0;
            if ((detached = this->attached_to())) {
                LOG_DEBUG("BN_set_word(detached, value = " << value << ")...");
                BN_set_word(detached, value);
                return true;
            }
            this->destroy();
        }
        return false;
    }
    virtual bool create(const unsigned_integert& copy) {
        return false;
    }
    virtual bool create() {
        if ((this->destroyed())) {
            BIGNUM* detached = 0;
            LOG_DEBUG("detached = BN_new()...");
            if ((detached = BN_new())) {
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
        BIGNUM* detached = 0;
        if ((detached = this->detach())) {
            LOG_DEBUG("BN_clear_free(detached)...");
            BN_clear_free(detached);
        }
        return success;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    unsigned_integer& add
    (unsigned_integer& c, const unsigned_integer& a, const unsigned_integer& b) {
        BIGNUM* detached = 0, *c_ = 0, *b_ = 0, *a_ = 0;
        if ((detached = this->attached_to()) 
            && (c_ = c.attached_to())  && (b_ = b.attached_to()) && (a_ = a.attached_to())) {
            LOG_DEBUG("BN_add(c_, a_, b_)...");
            BN_add(c_, a_, b_);
        }
        return (unsigned_integer&)(*this);
    }
    unsigned_integer& sub
    (unsigned_integer& c, const unsigned_integer& a, const unsigned_integer& b) {
        BIGNUM* detached = 0, *c_ = 0, *b_ = 0, *a_ = 0;
        if ((detached = this->attached_to()) 
            && (c_ = c.attached_to())  && (b_ = b.attached_to()) && (a_ = a.attached_to())) {
            LOG_DEBUG("BN_sub(c_, a_, b_)...");
            BN_sub(c_, a_, b_);
        }
        return (unsigned_integer&)(*this);
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    unsigned_integer& mul
    (unsigned_integer& c, const unsigned_integer& a, const unsigned_integer& b) {
        BIGNUM* detached = 0, *c_ = 0, *b_ = 0, *a_ = 0;
        if ((detached = this->attached_to()) 
            && (c_ = c.attached_to())  && (b_ = b.attached_to()) && (a_ = a.attached_to())) {
            LOG_DEBUG("BN_mul(c_, a_, b_)...");
            BN_mul(c_, a_, b_);
        }
        return (unsigned_integer&)(*this);
    }
    unsigned_integer& div
    (unsigned_integer& c, const unsigned_integer& a, const unsigned_integer& b) {
        BIGNUM* detached = 0, *t_ = 0, *c_ = 0, *b_ = 0, *a_ = 0;
        BN_CTX* ctx_ = 0;
        if ((detached = this->attached_to()) && (t_ = this->t()) && (ctx_ = this->ctx())
            && (c_ = c.attached_to()) && (b_ = b.attached_to()) && (a_ = a.attached_to())) {
            LOG_DEBUG("BN_div(c_, t_, a_, b_, ctx_)...");
            BN_div(c_, t_, a_, b_, ctx_);
        }
        return (unsigned_integer&)(*this);
    }
    unsigned_integer& mod
    (unsigned_integer& c, const unsigned_integer& a, const unsigned_integer& b) {
        BIGNUM* detached = 0, *c_ = 0, *b_ = 0, *a_ = 0;
        BN_CTX* ctx_ = 0;
        if ((detached = this->attached_to()) && (ctx_ = this->ctx())
            && (c_ = c.attached_to())  && (b_ = b.attached_to()) && (a_ = a.attached_to())) {
            LOG_DEBUG("BN_mod(c_, a_, b_, ctx_)...");
            BN_mod(c_, a_, b_, ctx_);
        }
        return (unsigned_integer&)(*this);
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    unsigned_integer& mod_inv
    (unsigned_integer& c, const unsigned_integer& a, const unsigned_integer& b) {
        BIGNUM* detached = 0, *t_ = 0, *c_ = 0, *b_ = 0, *a_ = 0;
        BN_CTX* ctx_ = 0;
        if ((detached = this->attached_to()) && (ctx_ = this->ctx())
            && (b_ = b.attached_to()) && (a_ = a.attached_to())) {
            LOG_DEBUG("t_ = BN_mod_inverse(a_, b_, ctx_)...");
            if ((t_ = BN_mod_inverse(a_, b_, ctx_))) {
                if ((c_ = c.detach())) {
                    LOG_DEBUG("BN_clear_free(c_)...");
                    BN_clear_free(c_);
                }
                c.attach_created(t_);
            } else {
                const creator_exception e = failed_to_create;
                LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
                throw(e);
            }
        }
        return (unsigned_integer&)(*this);
    }
    unsigned_integer& mod_exp
    (unsigned_integer& c, const unsigned_integer& a, const unsigned_integer& e, const unsigned_integer& b) {
        BIGNUM* detached = 0, *e_ = 0, *c_ = 0, *b_ = 0, *a_ = 0;
        BN_CTX* ctx_ = 0;
        if ((detached = this->attached_to()) && (ctx_ = this->ctx())
            && (e_ = e.attached_to()) && (c_ = c.attached_to()) && (b_ = b.attached_to()) && (a_ = a.attached_to())) {
            LOG_DEBUG("BN_mod_exp(c_, a_, e_, b_, ctx_)...");
            BN_mod_exp(c_, a_, e_, b_, ctx_);
        }
        return (unsigned_integer&)(*this);
    }
    unsigned_integer& exp
    (unsigned_integer& c, const unsigned_integer& a, const unsigned_integer& b) {
        BIGNUM* detached = 0, *c_ = 0, *b_ = 0, *a_ = 0;
        BN_CTX* ctx_ = 0;
        if ((detached = this->attached_to()) && (ctx_ = this->ctx())
            && (c_ = c.attached_to())  && (b_ = b.attached_to()) && (a_ = a.attached_to())) {
            LOG_DEBUG("BN_exp(c_, a_, b_, ctx_)...");
            BN_exp(c_, a_, b_, ctx_);
        }
        return (unsigned_integer&)(*this);
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t set_msb(const byte_t* msb, size_t msbsize) {
        if ((msb) && (msbsize)) {
            BIGNUM* detached = 0;
            if ((detached = this->attached_to())) {
                LOG_DEBUG("BN_set_msb(detached, msb = " << x_to_string(msb, msbsize) << ", msbsize = " << msbsize << ")...");
                BN_set_msb(detached, msb, msbsize);
                return msbsize;
            }
        }
        return 0;
    }
    virtual ssize_t get_msb(byte_t* msb, size_t msbsize) {
        if ((msb) && (msbsize)) {
            BIGNUM* detached = 0;
            if ((detached = this->attached_to())) {
                BN_get_msb(detached, msb, msbsize);
                LOG_DEBUG("...BN_get_msb(detached, msb = " << x_to_string(msb, msbsize) << ", msbsize = " << msbsize << ")");
                return msbsize;
            }
        }
        return 0;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void init() {
        this->ctx_ = 0;
        this->t_ = 0;
    }
    virtual void fini() {
        if ((this->t_)) {
            LOG_DEBUG("BN_clear_free(this->t_)...");
            BN_clear_free(t_);
            this->t_ = 0;
        }
        if ((this->ctx_)) {
            LOG_DEBUG("BN_CTX_free(this->ctx_)...");
            BN_CTX_free(ctx_);
            this->ctx_ = 0;
        }
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual BN_CTX* ctx() {
        if (!(this->ctx_)) {
            LOG_DEBUG("this->ctx_ = BN_CTX_new()...");
            if (!(this->ctx_ = BN_CTX_new())) {
                const creator_exception e = failed_to_create;
                LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
                throw(e);
            }
        }
        return this->ctx_;
    }
    virtual BIGNUM* t() {
        if (!(this->t_)) {
            LOG_DEBUG("this->t_ = BN_new()...");
            if (!(this->t_ = BN_new())) {
                const creator_exception e = failed_to_create;
                LOG_ERROR("...failed throw(const creator_exception e = failed_to_create)...");
                throw(e);
            }
        }
        return this->t_;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    BN_CTX* ctx_;
    BIGNUM* t_;
};
typedef unsigned_integert<> unsigned_integer;

} // namespace bn 
} // namespace mp 
} // namespace numera 

#endif // _NUMERA_MP_BN_UNSIGNED_INTEGER_HPP 
