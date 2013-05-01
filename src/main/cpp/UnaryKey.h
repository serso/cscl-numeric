/*
 * UnaryKey.h
 *
 *  Created on: Jan 27, 2013
 *      Author: serso
 */

#pragma once

#include <string>
#include <cstring>

namespace cscl {

class UnaryKey {

    /*
     **********************************************************************
     *
     *                           FIELDS
     *
     **********************************************************************
     */

public:
    const std::string& operation;
    const std::string& elementType;

    /*
     **********************************************************************
     *
     *                           CONSTRUCTORS
     *
     **********************************************************************
     */

public:
    UnaryKey(const std::string& operation, const std::string& elementType);
    virtual ~UnaryKey();


    /*
     **********************************************************************
     *
     *                           METHODS
     *
     **********************************************************************
     */

    const bool operator==(const UnaryKey& that) const;
};

class UnaryKeyHashFunction {
public:
    std::size_t operator ()(const UnaryKey& unaryKey) const;
};

class UnaryKeyEqualsOperator {
public:
    bool operator ()(const UnaryKey& left, const UnaryKey& right) const;
};

} /* namespace cscl */
