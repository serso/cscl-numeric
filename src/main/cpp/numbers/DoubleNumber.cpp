/*
 * DoubleNumber.cpp
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

#include "DoubleNumber.h"
#include "Number.h"
#include "../Maths.h"
#include <stddef.h>
#include <iomanip>
#include <sstream>


namespace cscl {
/*
 **********************************************************************
 *
 *                           CONSTRUCTORS
 *
 **********************************************************************
 */

DoubleNumber::DoubleNumber(const double value) : value(value) {
}

DoubleNumber::~DoubleNumber() {
}

/*static*/const DoubleNumber& DoubleNumber::of(const double value) {
    return *new DoubleNumber(value);
}

/*
 **********************************************************************
 *
 *                           METHODS
 *
 **********************************************************************
 */

const std::string DoubleNumber::toString() const {
    std::ostringstream out;
    out << std::fixed << this->value;
    return out.str();
}

const int DoubleNumber::getSign() const {
    return Maths::getSign(this->value);
}

const bool DoubleNumber::isInteger() const {
    return false;
}

const DoubleNumber& DoubleNumber::asReal() const {
    return *this;
}

/*
 **********************************************************************
 *
 *                           ARITHMETIC
 *
 **********************************************************************
 */

const DoubleNumber& DoubleNumber::operator+(const DoubleNumber& that) const {
    return of(this->value + that.value);
}

const DoubleNumber& DoubleNumber::operator+(const RealNumber& number) const {
    const DoubleNumber& that = dynamic_cast<const DoubleNumber&>(number);
    return of(this->value + that.value);
}

const DoubleNumber& DoubleNumber::operator+(const Number& number) const {
    if (number.isInteger()) {
        return *this + number.asReal();
    } else {
        const DoubleNumber& that = dynamic_cast<const DoubleNumber&>(number);
        return *this + that;
    }
}

const DoubleNumber& DoubleNumber::operator-(const DoubleNumber& that) const {
    return of(this->value - that.value);
}

const DoubleNumber& DoubleNumber::operator-(const RealNumber& number) const {
    const DoubleNumber& that = dynamic_cast<const DoubleNumber&>(number);
    return of(this->value - that.value);
}

const DoubleNumber& DoubleNumber::operator-(const Number& number) const {
    if (number.isInteger()) {
        return *this - number.asReal();
    } else {
        const DoubleNumber& that = dynamic_cast<const DoubleNumber&>(number);
        return *this - that;
    }
}

const DoubleNumber& DoubleNumber::operator*(const DoubleNumber& that) const {
    return of(this->value * that.value);
}

const DoubleNumber& DoubleNumber::operator*(const RealNumber& number) const {
    const DoubleNumber& that = dynamic_cast<const DoubleNumber&>(number);
    return of(this->value * that.value);
}

const DoubleNumber& DoubleNumber::operator*(const Number& number) const {
    if (number.isInteger()) {
        return *this * number.asReal();
    } else {
        const DoubleNumber& that = dynamic_cast<const DoubleNumber&>(number);
        return *this * that ;
    }
}

const DoubleNumber& DoubleNumber::operator/(const DoubleNumber& that) const {
    return of(this->value / that.value);
}

const DoubleNumber& DoubleNumber::operator/(const RealNumber& number) const {
    const DoubleNumber& that = dynamic_cast<const DoubleNumber&>(number);
    return of(this->value / that.value);
}

const DoubleNumber& DoubleNumber::operator/(const Number& number) const {
    if (number.isInteger()) {
        return *this / number.asReal();
    } else {
        const DoubleNumber& that = dynamic_cast<const DoubleNumber&>(number);
        return *this / that;
    }
}
} /*namespace cscl*/
