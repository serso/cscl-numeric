/*
 * Numeric.h
 *
 *  Created on: May 19, 2013
 *      Author: serso
 */

#pragma once

#include "Common.h"

namespace cscl {

    class Numeric {
    public:
        Numeric();
        virtual ~Numeric();

        virtual const std::string toString() const = 0;
    };

} /* namespace cscl */
