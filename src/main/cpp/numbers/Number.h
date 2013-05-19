#pragma once

#include <iomanip>
#include "../Common.h"

namespace cscl {

    class Number : public Numeric {
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

    public:
        
        Number(const double value);
        
        static const Number of(const double value);
        
        Number(const Number& that);
        
        virtual ~Number();

        /*
         **********************************************************************
         *
         *                           METHODS
         *
         **********************************************************************
         */

    public:
        
        const std::string toString() const;

        const int getSign() const;

        /*
         **********************************************************************
         *
         *                           ARITHMETIC
         *
         **********************************************************************
         */

        const Number operator+(const Number& that) const;
        const Number operator-(const Number& that) const;
        const Number operator*(const Number& that) const;
        const Number operator/(const Number& that) const;
    };
} /*namespace cscl*/
