/*
 * Assertions.cpp
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

#include "Assertions.h"
#include <assert.h>
#include <iostream>

#define printErrorMessage(expected,actual,errorMessage)\
        if (errorMessage != "") { std::cout << errorMessage << std::endl; }\
        std::cout << Assertions::ASSERT << "Expected: " << expected << " differs from actual: " << actual << std::endl;

/*
 **********************************************************************
 *
 *                           CONSTANTS
 *
 **********************************************************************
 */

const std::string Assertions::ASSERT = "Assertion failed! ";

/*
 **********************************************************************
 *
 *                           CONSTRUCTORS
 *
 **********************************************************************
 */

Assertions::Assertions() {
    assert(false);
}

Assertions::~Assertions() {
}

/*
 **********************************************************************
 *
 *                           METHODS
 *
 **********************************************************************
 */

void Assertions::equals(const std::string& expected, const std::string& actual,
        const std::string& errorMessage) {
    if (expected != actual) {
        printErrorMessage(expected, actual, errorMessage);
    }
}

void Assertions::equals(const int expected, const int actual,
        const std::string& errorMessage) {
    if (expected != actual) {
        printErrorMessage(expected, actual, errorMessage);
    }
}
