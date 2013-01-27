/*
 * UnsupportedOperationException.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include "Exception.h"

namespace cscl {

class UnsupportedOperationException: public Exception {
public:
    UnsupportedOperationException();
    virtual ~UnsupportedOperationException() throw();
};

} /* namespace cscl */
