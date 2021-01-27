#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}
TEST(OpTest, OpEvaluateNegative) {
	Op* test = new Op(-1);
	EXPECT_EQ(test->evaluate(), -1);
}
TEST(OpTest, OpEvaluateZero) {
	Op* test = new Op(0);
	EXPECT_EQ(test->evaluate(), 0);
}
TEST(OpTest, OpStringify) {
	Op* test = new Op(4);
	EXPECT_EQ(test->stringify(), "4");
}
TEST(OpTest, SevenOpMock) {         
	Op* test = new Op(7.5);         
	EXPECT_EQ(test->stringify(), "7.5"); 
}

TEST(RandTest, RandEvaluateNonZero) {
	Rand* test = new Rand();
	srand(time(NULL));
	EXPECT_EQ(test->evaluate(), rand() % 100);
}
TEST(MultTest, MultEvaluateNumber) {
	Op* nine = new Op(9);
	Op* eight = new Op(8);
	Mult* test = new Mult(nine, eight);
	EXPECT_EQ(test->evaluate(), 9 * 8);
}
TEST(MultTest, MultStringify) {        
	Mult* test = new Op(nine, eight);
	EXPECT_EQ(test->stringify(), "72");
}
TEST(DivTest, DivEvaluateNonzero) {
	Op* twenty = new Op(20);         
	Op* two = new Op(2);
	Div* test = new Div(twenty, two);
	EXPECT_EQ(test->evaluate(), 20 / 2);
}
TEST(DivTest, DivStringify) {         
	Div* test = new Div(twenty, two);         
	EXPECT_EQ(test->stringify(), "10");
}
TEST(AddTest, AddEvaluateNonzero) { 
	Op* two = new Op(2);        
	Add* test = new ADD(two, mult);    
	EXPECT_EQ(test->evaluate(), 2 + 2); } 
TEST(AddTest, AddStringify) {         
	Add* test = new Add(two,  mult);         
	EXPECT_EQ(test->stringify(), "2 + 2"); }
TEST(SubTest, SubEvaluateNonzero) {
	Op* two = new Op(2);         
	Sub* test = new Sub(add, two);         
	EXPECT_EQ(test->evaluate(), 3 - 2); } 
TEST(SubTest, SubStringify) {         
	Sub* test = new Sub(add, two);
 	EXPECT_EQ(test->evaluate(), "3 - 2"); };        
TEST(PowTest, PowEvaluateNonzero) {
	Pow* three = new Pow(3);
	Pow* two   = new Pow(2);          
	Pow* test = new Pow(three, two);        
	EXPECT_EQ(test->evaluate(), 3 ^ 2); } 
TEST(PowTest, PowStringify) {         
	Pow* test = new Pow(three, two);         
	EXPECT_EQ(test->evaluate(), "3 ^ 2"); 
};
#endif //__OP_TEST_HPP__
