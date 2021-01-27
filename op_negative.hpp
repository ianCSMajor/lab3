#ifndef __OP_NEGATIVE_HPP__ 
#define __OP_NEGATIVE_HPP__

#include "base.hpp"

class negativeOpMock: public Base {
	public:
	negativeOpMock(){}
	
	virtual double evaluate() { return -1; }
	virtual string stringify(){ return "-1"; }	


}


#endif //__OP_NEGATIVE_HPP__
