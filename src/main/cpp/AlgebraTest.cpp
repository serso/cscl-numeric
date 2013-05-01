/*
 * AlgebraTest.cpp
 *
 *  Created on: Apr 28, 2013
 *      Author: serso
 */

#include "Assertions.h"
#include "Algebra.h"
#include "UnsupportedOperationException.h"
#include <iostream>

namespace cscl {
namespace tests {


namespace AlgebraTest {

static void testInstance() {
    Algebra* a = Algebra::getInstance();
    Assertions::notNull(a);

    Algebra* a2 = Algebra::getInstance();
    Assertions::equals(a, a2);
}

static const Element* testUnaryFunction(const Element* e) {
    return e;
}

static void testUnaryFunctions() {
    Algebra* a = Algebra::getInstance();

    try {
        a->getFunction("+dsf", "fsdfasf");
        Assertions::fail();
    } catch(UnsupportedOperationException& e) {
        //ok
    }

    std::cerr << "starting" << std::endl;
    UnaryOperationFunction* expected = &testUnaryFunction;
    std::cerr << "adding function" << std::endl;
    a->addFunction("+", "test", expected);
    std::cerr << "getting function" << std::endl;
    UnaryOperationFunction* actual = a->getFunction("+", "test");
    std::cerr << "using function" << std::endl;
    //Assertions::equals(expected, actual);
}

static void run() {
    testInstance();
    testUnaryFunctions();
}
}

}
}
