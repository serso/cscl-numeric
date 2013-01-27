/*
 * Maths.h
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */

#pragma once

class Maths {

    /*
    **********************************************************************
    *
    *                           CONSTRUCTORS
    *
    **********************************************************************
    */


private:
    Maths();
    virtual ~Maths();

    /*
    **********************************************************************
    *
    *                           METHODS
    *
    **********************************************************************
    */

public:

    static int getSign(const int value);
    static int getSign(const double value);

};
