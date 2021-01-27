#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"

TEST(DivTest, DivEvaluatePos) {
    Base* val1 = new Op(7);
    Base* val2 = new Op(4);
    Base* test = new Div(val1,val2);
    EXPECT_NEAR(test -> evaluate(), 1.75, 0.001);
}

TEST(DivTest, DivPrintPos) {
    Base* val1 = new Op(7);
    Base* val2 = new Op(4);
    Base* test = new Div(val1,val2);
    EXPECT_EQ(test -> stringify(), "7.000000 / 4.000000");
}

TEST(DivTest, DivEvaluateNeg) {
    Base* val1 = new Op(-6);
    Base* val2 = new Op(5);
    Base* test = new Div(val1, val2);
    EXPECT_NEAR(test -> evaluate(), -1.2, 0.01);
}

TEST(DivTest, DivPrintNeg) {
    Base* val1 = new Op(-6);
    Base* val2 = new Op(5);
    Base* test = new Div(val1, val2);
    EXPECT_EQ(test -> stringify(), "-6.000000 / 5.000000");
}

TEST(DivTest, DivEvaluateZero) {
    Base* val1 = new Op(0);
    Base* val2 = new Op(9);
    Base* test = new Div(val1, val2);
    EXPECT_NEAR(test -> evaluate(), 0, 0.1);
}

TEST(DivTest, DivPrintZero) {
    Base* val1 = new Op(0);
    Base* val2 = new Op(9);
    Base* test = new Div(val1, val2);
    EXPECT_EQ(test -> stringify(), "0.000000 / 9.000000");
}

TEST(DivTest, DivDivideByZero) {
    Base* val1 = new Op(4);
    Base* val2 = new Op(0);
    Base* test = new Div(val1, val2);
    EXPECT_EQ(test -> evaluate(), NULL);
}


TEST(DivTest, DivPrintDivideByZero) {
    Base* val1 = new Op(4);
    Base* val2 = new Op(0);
    Base* test = new Div(val1, val2);
    EXPECT_EQ(test -> stringify(), "4.000000 / 0.000000");
}

#endif
