/*
 * Assertions.h
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

#pragma once

#include <string>

class Assertions {

    /*
     **********************************************************************
     *
     *                           CONSTANTS
     *
     **********************************************************************
     */

private:

    static const std::string ASSERT;

    /*
     **********************************************************************
     *
     *                           CONSTRUCTORS
     *
     **********************************************************************
     */

private:
    Assertions();
    virtual ~Assertions();

    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */

public:
    static void equals(const std::string& expected, const std::string& actual,
            const std::string& errorMessage = "");

    static void equals(const int expected, const int actual,
                const std::string& errorMessage = "");

    static void equals(const void* expected, const void* actual,
                    const std::string& errorMessage = "");

    static void notNull(const void* object);

    static void fail();
};
