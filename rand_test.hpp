#ifndef _RAND_TEST_HPP_
#define _RAND_TEST_HPP_
#include "gtest/gtest.h"

#include "op.hpp"

TEST(RandTest, RandEvaluateNonZero) {
    srand(1);
    Base* test = new Rand();
    EXPECT_EQ(test->evaluate(), 83);
}
TEST(RandTest, RandStringifyNonZero) {
    srand(1);
    Base* test = new Rand();
    EXPECT_EQ(test->stringify(),"83.000000");
}
TEST(RandTest, RandEvaluateSame) {
    srand(1);
    Base* test = new Rand();
    EXPECT_EQ(test -> evaluate(), 83);
}
TEST(RandTest, RandStringifySame) {
    srand(1);
    Base* test = new Rand();
    EXPECT_EQ(test->stringify(),"83.000000");
}
#endif
