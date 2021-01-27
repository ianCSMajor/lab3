#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}
T(MultTest, MultEvaluatePos) {
    Base* val1 = new Op(7.5);
    Base* val2 = new Op(4);
    Base* test = new Mult(val1, val2);
    EXPECT_NEAR(test -> evaluate(), 30, 0.001);
}
TEST(MultTest, MultStringifyPos) {
    Base* val1 = new Op(7.5);
    Base* val2 = new Op(4);
    Base* test = new Mult(val1, val2);
    EXPECT_EQ(test -> stringify(), "7.500000 * 4.000000");
}
TEST(MultTest, MultEvaluateNeg) {
    Base* val1 = new Op(-6.3);
    Base* val2 = new Op(4);
    Base* test = new Mult(val1, val2);
    EXPECT_NEAR(test -> evaluate(), -25.2, 0.01);
}
TEST(MultTest, MultStringifyNeg) {
    Base* val1 = new Op(-6.3);
    Base* val2 = new Op(4);
    Base* test = new Mult(val1, val2);
    EXPECT_EQ(test -> stringify(), "-6.300000 * 4.000000");
}
TEST(PowTest, PowEvaluateOne){
    Base* val1 = new Op(9);
    Base* val2 = new Op(0);
    Base* test = new Pow(val1,val2);
    EXPECT_NEAR(test -> evaluate(), 1, 0.1);
}
TEST(PowTest, PowPrintOne) {
    Base* val1 = new Op(9);
    Base* val2 = new Op(0);
    Base* test = new Pow(val1,val2);
    EXPECT_EQ(test -> stringify(), "9.000000 ** 0.000000");
}
TEST(PowTest, PowEvaluateSmall) {
    Base* val1 = new Op(4);
    Base* val2 = new Op(.5);
    Base* test= new Pow(val1,val2);
    EXPECT_NEAR(test -> evaluate(), 2, 0.1);
}
TEST(PowTest, PowPrintSmall) {
    Base* val1 = new Op(4);
    Base* val2 = new Op(.5);
    Base* test= new Pow(val1,val2);
    EXPECT_EQ(test -> stringify(), "4.000000 ** 0.500000");
}
#endif //__OP_TEST_HPP__
