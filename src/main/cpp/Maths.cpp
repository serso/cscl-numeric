/*
 * Maths.cpp
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

#include "Maths.h"
#include <assert.h>

/*
 **********************************************************************
 *
 *                           CONSTRUCTORS
 *
 **********************************************************************
 */

Maths::Maths() {
    assert(false);
}

Maths::~Maths() {
}

/*
 **********************************************************************
 *
 *                           METHODS
 *
 **********************************************************************
 */

int Maths::getSign(const int value) {
    return value;
}

int Maths::getSign(const double value) {
    if (value > 0) {
        return 1;
    } else if (value < 0) {
        return -1;
    } else {
        return 0;
    }
}
