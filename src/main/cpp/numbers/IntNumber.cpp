/*
 * IntNumber.cpp
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#include "IntNumber.h"
#include "DoubleNumber.h"
#include "Number.h"
#include "../Maths.h"
#include <stddef.h>
#include <iomanip>
#include <sstream>

namespace cscl {

IntNumber::IntNumber(const int value) : value(value) {

}

IntNumber::~IntNumber() {
}

/*static*/const IntNumber& IntNumber::of(const int value) {
    return *new IntNumber(value);
}

/*
 **********************************************************************
 *
 *                           METHODS
 *
 **********************************************************************
 */

const std::string IntNumber::toString() const {
    std::ostringstream out;
    out << std::fixed << this->value;
    return out.str();
}

const int IntNumber::getSign() const {
    return Maths::getSign(this->value);
}

const bool IntNumber::isInteger() const {
    return true;
}

const RealNumber& IntNumber::asReal() const {
    // todo serso: should be replaced, type of RealNumber may be different
    return DoubleNumber::of(this->value);
}


/*
 **********************************************************************
 *
 *                           ARITHMETIC
 *
 **********************************************************************
 */
const Number& IntNumber::operator+(const Number& that) const {
    if ( that.isInteger() ) {
        const IntNumber& number = dynamic_cast<const IntNumber&>(that);
        return *this + number;
    } else {
        return this->asReal() + that;
    }
}

const IntegerNumber& IntNumber::operator+(const IntegerNumber& that) const {
    const IntNumber& number = dynamic_cast<const IntNumber&>(that);
    return *this + number;
}

const IntNumber& IntNumber::operator+(const IntNumber& that) const {
    return of(this->value + that.value);
}

const RealNumber& IntNumber::operator+(const RealNumber& that) const {
    return this->asReal() + that;
}

const Number& IntNumber::operator-(const Number& that) const {
    if ( that.isInteger() ) {
        const IntNumber& number = dynamic_cast<const IntNumber&>(that);
        return *this - number;
    } else {
        return this->asReal() - that;
    }
}

const IntegerNumber& IntNumber::operator-(const IntegerNumber& that) const {
    const IntNumber& number = dynamic_cast<const IntNumber&>(that);
    return *this - number;
}

const IntNumber& IntNumber::operator-(const IntNumber& that) const {
    return of(this->value - that.value);
}

const RealNumber& IntNumber::operator-(const RealNumber& that) const {
    return this->asReal() - that;
}

const Number& IntNumber::operator*(const Number& that) const {
    if ( that.isInteger() ) {
        const IntNumber& number = dynamic_cast<const IntNumber&>(that);
        return *this * number ;
    } else {
        return this->asReal() * that;
    }
}

const IntegerNumber& IntNumber::operator*(const IntegerNumber& that) const {
    const IntNumber& number = dynamic_cast<const IntNumber&>(that);
    return *this * number;
}

const IntNumber& IntNumber::operator*(const IntNumber& that) const {
    return of(this->value * that.value);
}

const RealNumber& IntNumber::operator*(const RealNumber& that) const {
    return this->asReal() * that;
}

const Number& IntNumber::operator/(const Number& that) const {
    return this->asReal() / that;
}

const Number& IntNumber::operator/(const IntegerNumber& that) const {
    return this->asReal() / that;
}

const Number& IntNumber::operator/(const IntNumber& that) const {
    return this->asReal() / that;
}

const RealNumber& IntNumber::operator/(const RealNumber& that) const {
    return this->asReal() / that;
}



} /* namespace cscl */
