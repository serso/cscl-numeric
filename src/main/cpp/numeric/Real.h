/*
 * Real.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include "../Common.h"
#include "../numbers/Numbers.h"
#include "../numbers/Number.h"

namespace cscl {

class Real: public cscl::Numeric {

    /*
     **********************************************************************
     *
     *                           FIELDS
     *
     **********************************************************************
     */

private:

    const RealNumber value;
    /*
     **********************************************************************
     *
     *                           CONSTRUCTORS
     *
     **********************************************************************
     */

public:
    Real(const RealNumber value);
    
    static inline const Real of(const RealNumber value);
    
    static inline const Real of(const double value);
    
    Real(const Real& that);

public:
    virtual ~Real();

    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */
    
    const std::string toString() const;
    
    const int getSign() const;

    const Real operator+(const Real& that) const;
    const Real operator-(const Real& that) const;
    const Real operator*(const Real& that) const;
    const Real operator/(const Real& that) const;
};

} /* namespace cscl */
