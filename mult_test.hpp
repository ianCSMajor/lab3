#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(MultTest, MultEvaluatePos) {
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
TEST(MultTest, MultEvaluateZero) {
    Base* val1 = new Op(0);
    Base* val2 = new Op(4);
    Base* test = new Mult(val1, val2);
    EXPECT_NEAR(test -> evaluate(), 0, 0.1);
}
TEST(MultTest, MultStringifyZero) {
    Base* val1 = new Op(0);
    Base* val2 = new Op(4);
    Base* test = new Mult(val1, val2);
    EXPECT_EQ(test -> stringify(), "0.000000 * 4.000000");
}
#endif
