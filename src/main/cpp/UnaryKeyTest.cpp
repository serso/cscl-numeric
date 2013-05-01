/*
 * UnaryKeyTest.cpp
 *
 *  Created on: May 1, 2013
 *      Author: serso
 */

#include "UnaryKey.h"
#include "Assertions.h"
#include <tr1/unordered_map>

namespace cscl {
namespace tests {

namespace UnaryKeyTest {

static void testMap() {
    std::tr1::unordered_map<UnaryKey, std::string, UnaryKeyHashFunction, UnaryKeyEqualsOperator> unaryKeyMap;
    std::string expected = "test";
    unaryKeyMap[UnaryKey("+", "test")] = expected;
    std::string actual = unaryKeyMap[UnaryKey("+", "test")];
    Assertions::equals(expected, actual);
}

static void run() {
    testMap();
}

};

} /* namespace tests */
} /* namespace cscl */
