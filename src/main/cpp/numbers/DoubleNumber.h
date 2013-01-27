/*
 * DoubleNumber.h
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

#pragma once

#include "RealNumber.h"
#include <iomanip>

namespace cscl {

class DoubleNumber: public RealNumber {

    /*
     **********************************************************************
     *
     *                           FIELDS
     *
     **********************************************************************
     */

private:

    const double value;

    /*
     **********************************************************************
     *
     *                           CONSTRUCTORS
     *
     **********************************************************************
     */

private:

    DoubleNumber(const double value);

public:

    ~DoubleNumber();

public:

    // todo serso: actually not clear how to cache objects inside valueOf method as they accidently might be deleted
    // (I cannot distinguish caches object with no cached)
    static const DoubleNumber& of(const double value);

    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */

public:

    const bool isInteger() const;

    const std::string toString() const;

    const int getSign() const;

    const DoubleNumber& asReal() const;

    /*
     **********************************************************************
     *
     *                           ARITHMETIC
     *
     **********************************************************************
     */
    const DoubleNumber& operator+(const Number& that) const;
    const DoubleNumber& operator+(const RealNumber& that) const;
    const DoubleNumber& operator+(const DoubleNumber& that) const;

    const DoubleNumber& operator-(const Number& that) const;
    const DoubleNumber& operator-(const RealNumber& that) const;
    const DoubleNumber& operator-(const DoubleNumber& that) const;

    const DoubleNumber& operator*(const Number& that) const;
    const DoubleNumber& operator*(const RealNumber& that) const;
    const DoubleNumber& operator*(const DoubleNumber& that) const;

    const DoubleNumber& operator/(const Number& that) const;
    const DoubleNumber& operator/(const RealNumber& that) const;
    const DoubleNumber& operator/(const DoubleNumber& that) const;

};
} /*namespace cscl*/
