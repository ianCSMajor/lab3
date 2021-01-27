#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
TEST(AddTest, AddEvaluateZero) {
    Base* val1 = new Op(0);
    Base* val2 = new Op(0);
    Base* test = new Add(val1, val2);
    EXPECT_NEAR(test -> evaluate(), 0, 0.1);
}
TEST(AddTest, AddStringifyZero) {
    Base* val1 = new Op(0);
    Base* val2 = new Op(0);
    Base* test = new Add(val1, val2);
    EXPECT_EQ(test -> stringify(), "0.000000 + 0.000000");
}
TEST(AddTest, AddEvaluatePos) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(0);
    Base* test = new Add(val1, val2);
    EXPECT_NEAR(test -> evaluate(), 5, 0.1);
}
TEST(AddTest, AddStringifyPos) {
    Base* val1 = new Op(5);
    Base* val2 = new Op(0);
    Base* test = new Add(val1, val2);
    EXPECT_EQ(test -> stringify(), "5.000000 + 0.000000");
}
TEST(AddTest, AddEvaluateNeg) {
    Base* val1 = new Op(-4);
    Base* val2 = new Op(0);
    Base* test = new Add(val1, val2);
    EXPECT_NEAR(test -> evaluate(), -4, 0.1);
}
TEST(AddTest, AddStringifyNeg) {
    Base* val1 = new Op(-4);
    Base* val2 = new Op(0);
    Base* test = new Add(val1, val2);
    EXPECT_EQ(test -> stringify(), "-4.000000 + 0.000000");
}
#endif
