#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}
TEST(OpTest, OpPrintNonZero) {
    Base* test = new Op(8);
    EXPECT_EQ(test->stringify(), "8.000000");
}
TEST(OpTest, OpEvaluateSix) {
    Base* test = new Op(6);
    EXPECT_EQ(test->evaluate(), 6.0);
}

TEST(OpTest, OpPrintSix) {
    Base* test = new Op(6);
    EXPECT_EQ(test->stringify(), "6.000000");
}

TEST(OpTest, OpEvaluateZero) {
    Base* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpPrintZero) {
    Base* test = new Op(0);
    EXPECT_EQ(test->stringify(), "0.000000");
}

#endif //__OP_TEST_HPP__
