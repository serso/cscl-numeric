/*
 * Strings.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include <string>
#include <cstring>

class Strings {

    /*
     **********************************************************************
     *
     *                           CONSTRUCTORS
     *
     **********************************************************************
     */

private:
    Strings();
    virtual ~Strings();

    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */

public:

    static const std::size_t hashCode(const std::string& s);

    static const std::size_t hashCode(const std::string& s, const std::size_t basehashCode);

};
