#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include "sstream"
#include <math.h>
#include <stdlib.h>

class Op : public Base {
    public:
        Op(double value) : Base(), val(value) { }
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return std::to_string(val); }
    private:
	double val;
};
class Rand : public Base {
    public:
        Rand(): Base(), val(rand() % 100) {}
        virtual double evaluate() { return val; }
        virtual std::string stringify() { return std::to_string(val); }
    private:
	double val;
};
class Div : public Base {
    public:
	Div(Base* initVal, Base* divVal) : Base(), val1(initVal), val2(divVal) {}
	virtual double evaluate() {
	    if(val2 -> evaluate() == 0) {
		return NULL;
	    }
	    return val1 -> evaluate() / val2 -> evaluate();
	}
	virtual std::string stringify() {
		return val1 -> stringify() + " / " + val2 -> stringify();
	}
    private:
	Base* val1;
	Base* val2;
};
class Mult : public Base {
    public:
        Mult(Base* initVal, Base* multVal) : Base(), val1(initVal), val2(multVal) {}
        virtual double evaluate() {return val1 -> evaluate() * val2 -> evaluate(); }
        virtual std::string stringify() {
            return val1 -> stringify() + " * " + val2 -> stringify();
        }
    private:
        Base* val1;
        Base* val2;
};
class Add : public Base {
    public:
	Add(Base* initialVal, Base* addVal): Base(), val1(initialVal), val2(addVal) {}
	virtual double evaluate() {return val1 -> evaluate() + val2 -> evaluate();}
	virtual std::string stringify() {
	    return val1 -> stringify() + " + " + val2 -> stringify();
	}
    private:
	Base* val1;
	Base* val2;
};
class Sub : public Base {
    public:
	Sub(Base* initialVal, Base* subVal): Base(), val1(initialVal), val2(subVal) {}
	virtual double evaluate() {return val1 -> evaluate() - val2 -> evaluate();}
	virtual std::string stringify() {
	    return val1 -> stringify() + " - " + val2 -> stringify();
	}
    private:
	Base* val1;
	Base* val2;
};
class Pow : public Base {
    public:
	Pow(Base* baseVal, Base* expVal) : Base(), base(baseVal), exp(expVal) {}
	virtual double evaluate() {pow(base -> evaluate(), exp -> evaluate());}
	virtual std::string stringify() {
		return base -> stringify() + " ** " + exp -> stringify();
	}
    private:
	Base* base;
	Base* exp;
};
#endif //__OP_HPP__
