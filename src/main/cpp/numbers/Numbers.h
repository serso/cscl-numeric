/* 
 * File:   Numbers.h
 * Author: serso
 *
 * Created on May 19, 2013, 11:39 PM
 */

#include "Number.h"

#pragma once

namespace cscl {
    typedef Number<double> RealNumber;
    typedef Number<int> IntegerNumber;
    
    namespace Numbers {
        static const RealNumber toReal(const double value) {
            return RealNumber(value);
        }
    }
}