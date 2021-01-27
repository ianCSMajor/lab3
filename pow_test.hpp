#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
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

TEST(PowTest, PowEvaluateBig) {
    Base* val1 = new Op(3);
    Base* val2 = new Op(4);
    Base* test= new Pow(val1,val2);
    EXPECT_NEAR(test -> evaluate(), 81, 0.1);
}

TEST(PowTest, PowPrintBig) {
    Base* val1 = new Op(3);
    Base* val2 = new Op(4);
    Base* test= new Pow(val1,val2);
    EXPECT_EQ(test -> stringify(), "3.000000 ** 4.000000");
}


#endif
