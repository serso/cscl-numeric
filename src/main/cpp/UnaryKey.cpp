/*
 * UnaryKey.cpp
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#include "Common.h"
#include "UnaryKey.h"


namespace cscl {

UnaryKey::UnaryKey(const std::string& operation, const std::string& elementType)
                    : operation(operation), elementType(elementType) {
}

UnaryKey::~UnaryKey() {
}

const bool UnaryKey::operator==(const UnaryKey& that) const {
    bool result = false;

    if ( this->operation == that.operation ) {
        if ( this->elementType == that.elementType ) {
            result = true;
        }
    }

    return result;
}

std::size_t UnaryKeyHashFunction::operator ()(const UnaryKey& unaryKey) const {
    std::size_t result = Strings::hashCode(unaryKey.operation);
    result = Strings::hashCode(unaryKey.elementType, result);
    std::cout << "hashCode called " << std::endl;
    return result;
}

bool UnaryKeyEqualsOperator::operator ()(const UnaryKey& left, const UnaryKey& right) const {
    return left == right;
}

} /* namespace cscl */
