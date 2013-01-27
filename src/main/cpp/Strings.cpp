/*
 * Strings.cpp
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#include "Strings.h"
#include <assert.h>

Strings::Strings() {
    assert(false);

}

Strings::~Strings() {
}

const std::size_t Strings::hashCode(const std::string& s) {
    return hashCode(s, 0);
}

const std::size_t Strings::hashCode(const std::string& s, const std::size_t baseHashCode) {
    std::size_t h = baseHashCode;

    for ( std::string::const_iterator it = s.begin(); it != s.end(); it++) {
        h = h << 1 ^ (*it);
    }

    return h;
}

