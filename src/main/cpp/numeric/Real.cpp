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

Real::Real(const RealNumber value) : value(value) {
}

Real::Real(const Real& that) : value(that.value) {
}

/*static*/
const Real Real::of(const RealNumber value) {
    return Real(value);
}

/*static*/
const Real Real::of(const double value) {
    return of(Numbers::toReal(value));
}

Real::~Real() {
}

/*
 **********************************************************************
 *
 *                           METHODS
 *
 **********************************************************************
 */

const std::string Real::toString() const {
    return this->value.toString();
}

const int Real::getSign() const {
    return this->value.getSign();
}

const Real Real::operator+(const Real& that) const {
    return Real(this->value + that.value);
}

const Real Real::operator-(const Real& that) const {
    return Real(this->value - that.value);
}

const Real Real::operator*(const Real& that) const {
    return Real(this->value * that.value);
}

const Real Real::operator/(const Real& that) const {
    return Real(this->value / that.value);
}

} /* namespace cscl */
