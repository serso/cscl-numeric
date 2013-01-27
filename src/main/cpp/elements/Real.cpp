/*
 * Real.cpp
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#include "Real.h"

namespace cscl {

/*
 **********************************************************************
 *
 *                           CONSTRUCTORS
 *
 **********************************************************************
 */

Real::Real(const Number& value) :
        value(value) {
}

Real::~Real() {
}

const Real& Real::of(const Number& value) {
    return *new Real(value);
}

/*
 **********************************************************************
 *
 *                           METHODS
 *
 **********************************************************************
 */

const Real& Real::operator+(const Real& that) const {
    return of(this->value + that.value);
}

const Real& Real::operator-(const Real& that) const {
    return of(this->value - that.value);
}

const Real& Real::operator*(const Real& that) const {
    return of(this->value * that.value);
}

const Real& Real::operator/(const Real& that) const {
    return of(this->value / that.value);
}

} /* namespace cscl */
