/*
 * Tests.cpp
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

#include "numbers/DoubleNumberTest.cpp"
#include <iostream>
#include <exception>

namespace Tests {

static void run() {
    std::cout << "Starting tests!" << std::endl;

    try {
        DoubleNumberTest::run();
        std::cout << "All tests have been successfully executed!" << std::endl;
    } catch (std::exception& e) {
        std::cout << "Some errors occurred while running the tests: "
                << std::endl << e.what() << std::endl;
    } catch (...) {
        std::cout << "Unknown error occurred while running the tests."
                << std::endl;
    }
}

}

