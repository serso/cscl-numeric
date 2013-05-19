#pragma once

#include <iomanip>
#include <stddef.h>
#include <sstream>
#include "../Common.h"
#include "../Maths.h"

namespace cscl {

    template<class N> class Number {
        /*
         **********************************************************************
         *
         *                           FIELDS
         *
         **********************************************************************
         */
    private:
        const N value;

        /*
         **********************************************************************
         *
         *                           CONSTRUCTORS
         *
         **********************************************************************
         */

    public:

        Number(const N value) : value(value) {
        }

        static inline const Number<N> of(const N value) {
            return Number<N>(value);
        }

        Number(const Number<N>& that) : value(that.value) {
        }

        virtual ~Number() {
        };

        /*
         **********************************************************************
         *
         *                           METHODS
         *
         **********************************************************************
         */

    public:

        const std::string toString() const {
            std::ostringstream out;
            out << std::fixed << this->value;
            return out.str();
        }

        const int getSign() const {
            return Maths::getSign(this->value);
        }

        /*
         **********************************************************************
         *
         *                           ARITHMETIC
         *
         **********************************************************************
         */

        const Number<N> operator+(const Number<N>& that) const {
            return of(this->value + that.value);
        }

        const Number<N> operator-(const Number<N>& that) const {
            return of(this->value - that.value);
        }

        const Number<N> operator*(const Number<N>& that) const {
            return of(this->value * that.value);
        }

        const Number<N> operator/(const Number<N>& that) const {
            return of(this->value / that.value);
        }
    };
} /*namespace cscl*/
