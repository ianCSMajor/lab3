#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"

TEST(SubTest, SubEvaluateZero) {
    Base* val1 = new Op(7);
    Base* val2 = new Op(7);
    Base* test = new Sub(val1, val2);
    EXPECT_NEAR(test -> evaluate(), 0, 0.1);
}
TEST(SubTest, SubStringifyZero) {
    Base* val1 = new Op(7);
    Base* val2 = new Op(7);
    Base* test = new Sub(val1, val2);
    EXPECT_EQ(test -> stringify(), "7.000000 - 7.000000");
}
TEST(SubTest, SubEvaluatePos) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(0);
    Base* test = new Sub(val1, val2);
    EXPECT_NEAR(test -> evaluate(), 5, 0.1);
}
TEST(SubTest, SubStringifyPos) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(0);
    Base* test = new Sub(val1, val2);
    EXPECT_EQ(test -> stringify(), "5.000000 - 0.000000");
}
TEST(SubTest, SubEvaluateNeg) {
    Base* val1 = new Op(0);
    Base* val2 = new Op(6);
    Base* test = new Sub(val1, val2);
    EXPECT_NEAR(test -> evaluate(), -6, 0.1);
}
TEST(SubTest, SubStringifyNeg) {
    Base* val1 = new Op(0);
    Base* val2 = new Op(6);
    Base* test = new Sub(val1, val2);
    EXPECT_EQ(test -> stringify(), "0.000000 - 6.000000");
}
#endif
