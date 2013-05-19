/*
 * Real.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include "../Common.h"
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

    const Number value;
    /*
     **********************************************************************
     *
     *                           CONSTRUCTORS
     *
     **********************************************************************
     */

public:
    Real(const Number value);

public:
    virtual ~Real();

    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */

    const Real operator+(const Real& that) const;
    const Real operator-(const Real& that) const;
    const Real operator*(const Real& that) const;
    const Real operator/(const Real& that) const;
};

} /* namespace cscl */
