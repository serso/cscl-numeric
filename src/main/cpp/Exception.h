/*
 * Exception.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include <exception>

namespace cscl {

class Exception: public std::exception {
public:
    Exception();
    virtual ~Exception() throw();
};

} /* namespace cscl */
