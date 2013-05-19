/*
 * DoubleNuberTest.cpp
 *
 *  Created on: Jan 26, 2013
 *      Author: serso
 */
#include "../numbers/Numbers.h"
#include "Real.h"
#include "../Assertions.h"
#include <limits>
#include <string>

namespace cscl {

namespace tests {

namespace RealTest {

static void testSum(const double lValue, const double rValue, const std::string& expected) {
    const Real lv(lValue);
    const Real rv(rValue);
    const Real& result = lv + rv;
    Assertions::equals(expected, result.toString(), "RealTest::testSum test failed!");
}

static void testSum() {
    testSum(1, 2, "3.000000");
    testSum(100, -100, "0.000000");
    testSum(100, -10, "90.000000");
    testSum(0, 0, "0.000000");
    testSum(1, 123456789, "123456790.000000");
    testSum(0.5, 1.5, "2.000000");
    testSum(0.5, 1.2, "1.700000");

    const Real lv(1.5);
    const Real rv(5);
    const Real& result = lv + rv;
    Assertions::equals("6.500000", result.toString(), "RealTest::testSum test failed!");
}

static void testSubtraction(const double lValue, const double rValue, const std::string& expected) {
    const Real lv(lValue);
    const Real rv(rValue);
    const Real& result = lv - rv;
    Assertions::equals(expected, result.toString(), "RealTest::testSubtraction test failed!");
}

static void testSubtraction() {
    testSubtraction(1, 2, "-1.000000");
    testSubtraction(100, -100, "200.000000");
    testSubtraction(100, -10, "110.000000");
    testSubtraction(0, 0, "0.000000");
    testSubtraction(1, 123456789, "-123456788.000000");
    testSubtraction(0.5, 1.5, "-1.000000");
    testSubtraction(0.5, 1.2, "-0.700000");
}

static void testMulitplication(const double lValue, const double rValue,
        const std::string& expected) {
    const Real lv(lValue);
    const Real rv(rValue);
    const Real& result = lv * rv;
    Assertions::equals(expected, result.toString(), "RealTest::testMulitplication test failed!");
}

static void testMulitplication() {
    testMulitplication(1, 2, "2.000000");
    testMulitplication(100, -100, "-10000.000000");
    testMulitplication(100, -10, "-1000.000000");
    testMulitplication(0, 0, "0.000000");
    testMulitplication(1, 123456789, "123456789.000000");
    testMulitplication(0.5, 1.5, "0.750000");
    testMulitplication(0.5, 1.2, "0.600000");
}

static void testDivision(const double lValue, const double rValue, const std::string& expected) {
    const Real lv(lValue);
    const Real rv(rValue);
    const Real& result = lv / rv;
    Assertions::equals(expected, result.toString(), "RealTest::testDivision test failed!");
}

static void testDivision() {
    testDivision(1, 2, "0.500000");
    testDivision(100, -100, "-1.000000");
    testDivision(100, -10, "-10.000000");
    testDivision(0, 0, "nan");
    testDivision(-0, 0, "nan");
    testDivision(0, -0, "nan");
    testDivision(1, 0, "inf");
    testDivision(1, 123456789, "0.000000");
    testDivision(0.5, 1.5, "0.333333");
    testDivision(0.5, 1.2, "0.416667");
}

static void testSign(const double value, const int expected) { 
    const Real v(value);
    Assertions::equals(expected, v.getSign(), "RealTest::testSign test failed!");
}

static void testSign() {
    testSign(-222.0, -1);
    testSign(-22234234.0, -1);
    testSign(-0.0, 0);
    testSign(std::numeric_limits<double>::infinity(), 1);
    testSign(1.0, 1);
    testSign(0.0, 0);
}

static void run() {
    testSum();
    testSubtraction();
    testMulitplication();
    testDivision();
    testSign();
}
}

}
}