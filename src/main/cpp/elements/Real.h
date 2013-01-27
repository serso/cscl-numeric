/*
 * Real.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include "../Element.h"
#include "../numbers/Number.h"

namespace cscl {

class Real: public cscl::Element {

    /*
     **********************************************************************
     *
     *                           FIELDS
     *
     **********************************************************************
     */

private:

    const Number& value;
    /*
     **********************************************************************
     *
     *                           CONSTRUCTORS
     *
     **********************************************************************
     */

private:
    Real(const Number& value);

public:
    virtual ~Real();
    static const Real& of(const Number& value);

    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */

    const Real& operator+(const Real& that) const;
    const Real& operator-(const Real& that) const;
    const Real& operator*(const Real& that) const;
    const Real& operator/(const Real& that) const;
};

} /* namespace cscl */
