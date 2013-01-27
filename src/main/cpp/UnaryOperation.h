/*
 * UnaryOperation.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once
#include "Operation.h"
#include "Element.h"

namespace cscl {
class UnaryOperation : Operation {
public:
    virtual ~UnaryOperation() = 0;

    virtual const Element& doUnaryOperation(const Element& element) const;
};
} /*namespace cscl*/
