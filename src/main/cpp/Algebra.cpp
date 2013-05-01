/*
 * Algebra.cpp
 *
 *  Created on: Apr 28, 2013
 *      Author: serso
 */

#include "Algebra.h"
#include "UnsupportedOperationException.h"
#include <tr1/unordered_map>

namespace cscl {

/*
**********************************************************************
*
*                           CONSTANTS
*
**********************************************************************
*/

Algebra* Algebra::INSTANCE = new Algebra();

/*
**********************************************************************
*
*                           CONSTRUCTORS
*
**********************************************************************
*/

Algebra::Algebra() {

}

Algebra::~Algebra() {
}



/*
**********************************************************************
*
*                           METHODS
*
**********************************************************************
*/

/*static*/ Algebra* Algebra::getInstance(){
    return Algebra::INSTANCE;
};

const UnaryOperationFunction* Algebra::getFunction(const std::string& operation, const std::string& elementType) {
    UnaryOperationFunction* unaryOperationFunction = this->unaryFunctions[UnaryKey(operation, elementType)];
    if ( unaryOperationFunction == NULL ) {
        throw UnsupportedOperationException();
    }
    return unaryOperationFunction;
}

void Algebra::addFunction(const std::string& operation, const std::string& elementType, const UnaryOperationFunction* function){
    this->unaryFunctions[UnaryKey(operation, elementType)] = function;
}

} /* namespace cscl */
