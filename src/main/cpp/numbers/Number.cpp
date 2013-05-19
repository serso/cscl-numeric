/*
 * RealNumber.cpp
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

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

    Number::Number(const double value) : value(value) {
    }
    
    Number::Number(const Number& that) : value(that.value) {
    }
    
    /*static*/ 
    const Number Number::of(const double value){
        return Number(value);
    }

    Number::~Number() {
    }

    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */

    const std::string Number::toString() const {
        std::ostringstream out;
        out << std::fixed << this->value;
        return out.str();
    }

    const int Number::getSign() const {
        return Maths::getSign(this->value);
    }

    /*
     **********************************************************************
     *
     *                           ARITHMETIC
     *
     **********************************************************************
     */

    const Number Number::operator+(const Number& that) const {
        return Number(this->value + that.value);
    }

    const Number Number::operator-(const Number& that) const {
        return Number(this->value - that.value);
    }

    const Number Number::operator*(const Number& that) const {
        return Number(this->value * that.value);
    }

    const Number Number::operator/(const Number& that) const {
        return Number(this->value / that.value);
    }
} /*namespace cscl*/
