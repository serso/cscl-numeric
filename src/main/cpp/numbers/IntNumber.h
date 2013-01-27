/*
 * IntNumber.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include "IntegerNumber.h"

namespace cscl {

class IntNumber: public cscl::IntegerNumber {

    /*
     **********************************************************************
     *
     *                           FIELDS
     *
     **********************************************************************
     */

private:

    const int value;

    /*
     **********************************************************************
     *
     *                           CONSTRUCTORS
     *
     **********************************************************************
     */

private:
    IntNumber(const int value);

public:
    virtual ~IntNumber();

public:

    // todo serso: actually not clear how to cache objects inside valueOf method as they accidently might be deleted
    // (I cannot distinguish caches object with no cached)
    static const IntNumber& of(const int value);

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

    const RealNumber& asReal() const;

    /*
     **********************************************************************
     *
     *                           ARITHMETIC
     *
     **********************************************************************
     */
    const Number& operator+(const Number& that) const;
    const RealNumber& operator+(const RealNumber& that) const;
    const IntegerNumber& operator+(const IntegerNumber& that) const;
    const IntNumber& operator+(const IntNumber& that) const;

    const Number& operator-(const Number& that) const;
    const RealNumber& operator-(const RealNumber& that) const;
    const IntegerNumber& operator-(const IntegerNumber& that) const;
    const IntNumber& operator-(const IntNumber& that) const;

    const Number& operator*(const Number& that) const;
    const RealNumber& operator*(const RealNumber& that) const;
    const IntegerNumber& operator*(const IntegerNumber& that) const;
    const IntNumber& operator*(const IntNumber& that) const;

    const Number& operator/(const Number& that) const;
    const RealNumber& operator/(const RealNumber& that) const;
    const Number& operator/(const IntegerNumber& that) const;
    const Number& operator/(const IntNumber& that) const;

};

} /* namespace cscl */
