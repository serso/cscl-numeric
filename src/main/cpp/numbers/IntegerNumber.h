/*
 * IntegerNumber.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include "Number.h"

namespace cscl {

class IntegerNumber: public Number {
public:
    virtual ~IntegerNumber() {
    }

    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */

    virtual const IntegerNumber& operator+(const IntegerNumber& that) const = 0;
    virtual const IntegerNumber& operator-(const IntegerNumber& that) const = 0;
    virtual const IntegerNumber& operator*(const IntegerNumber& that) const = 0;
    virtual const Number& operator/(const IntegerNumber& that) const = 0;
};

} /* namespace cscl */
