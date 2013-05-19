/*
 * Tests.cpp
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

#include "numbers/NumberTest.cpp"
#include <iostream>
#include <exception>

namespace cscl {
namespace tests {

static void run() {
    std::cout << "Starting tests!" << std::endl;

    try {
        cscl::tests::RealNumberTest::run();
        std::cerr << "All tests have been successfully executed!" << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Some errors occurred while running the tests: "
                << std::endl << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred while running the tests."
                << std::endl;
    }
}

}

}
