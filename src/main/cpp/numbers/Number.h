#pragma once

#include <iomanip>

namespace cscl {

class RealNumber;

class Number {

    /*
    **********************************************************************
    *
    *                           CONSTRUCTORS
    *
    **********************************************************************
    */

public:
    virtual ~Number() {};

	/*
	**********************************************************************
	*
	*                           METHODS
	*
	**********************************************************************
	*/

public:

    virtual const bool isInteger() const = 0;

    virtual const RealNumber& asReal() const = 0;

    virtual const std::string toString() const = 0;

    virtual const int getSign() const = 0;

    /*
    **********************************************************************
    *
    *                           ARITHMETIC
    *
    **********************************************************************
    */

	virtual const Number& operator+(const Number& that) const = 0;
	virtual const Number& operator-(const Number& that) const = 0;
	virtual const Number& operator*(const Number& that) const = 0;
	virtual const Number& operator/(const Number& that) const = 0;

    virtual const RealNumber& operator+(const RealNumber& that) const = 0;
    virtual const RealNumber& operator-(const RealNumber& that) const = 0;
    virtual const RealNumber& operator*(const RealNumber& that) const = 0;
    virtual const RealNumber& operator/(const RealNumber& that) const = 0;
};
} /*namespace cscl*/
