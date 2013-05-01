/*
 * Algebra.h
 *
 *  Created on: Apr 28, 2013
 *      Author: serso
 */

#pragma once

#include "Element.h"
#include "UnaryKey.h"
#include <tr1/unordered_map>

namespace cscl {

typedef const Element* (UnaryOperationFunction)(const Element*);

class Algebra {

/*
**********************************************************************
*
*                           CONSTANTS
*
**********************************************************************
*/


private:

    static Algebra* INSTANCE;

/*
**********************************************************************
*
*                           FIELDS
*
**********************************************************************
*/

private:
    std::tr1::unordered_map<UnaryKey, UnaryOperationFunction*, UnaryKeyHashFunction, UnaryKeyEqualsOperator> unaryFunctions;

/*
**********************************************************************
*
*                           CONSTRUCTORS
*
**********************************************************************
*/


public:
    Algebra();
    virtual ~Algebra();

/*
**********************************************************************
*
*                           METHODS
*
**********************************************************************
*/

public:
    static Algebra* getInstance();

    const UnaryOperationFunction* getFunction(const std::string& operation, const std::string& elementType);

    void addFunction(const std::string& operation, const std::string& elementType, const UnaryOperationFunction* function);
};

} /* namespace cscl */
