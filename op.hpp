#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include "sstream"

class Op : public Base {
   private:
	double n; 
   public:
	Op(): n(0){}
        Op(double value) : Base() {n=value;}
        virtual double evaluate() { return n; }
        virtual std::string stringify() { 
		std::ostringstream strs;
                strs << n;
                std::string str = strs.str();
                return str; 
	}
};
class Rand: public Base {
     private:
	double r;
     public:
        Rand():Base() { }
        virtual double evaluate() { 
		r=rand()%100;
		return r;
	 }
        virtual std::string stringify() { 
		std::ostringstream strs;
		strs << r;
		std::string str = strs.str();
		return str;	
	 }
};
class Mult : public Base{
    private:
	double a,b,c;
    public:
	Mult(Base* x,Base* y):Base(){a=x->evaluate(); b=y->evaluate();}
	virtual double evaluate(){c=a*b; return c;}
	virtual std::string stringify(){
		std::ostringstream strs;
                strs << c;
                std::string str = strs.str();
                return str;
	}
};
class Div : public Base{
    private:
	double a,b,c;
    public:
        Div(Base* x,Base* y):Base(){a=x->evaluate(); b=y->evaluate();}
        virtual double evaluate(){c=a/b; return c;}
        virtual std::string stringify(){
                std::ostringstream strs;
                strs << c;
                std::string str = strs.str();
                return str;
        }
};
class Add : public Base{
    private:
	double a,b,c;
    public:
        Add(Base* x,Base* y):Base(){a=x->evaluate(); b=y->evaluate();}
        virtual double evaluate(){c=a+b; return c;}
        virtual std::string stringify(){
                std::ostringstream strs;
                strs << c;
                std::string str = strs.str();
                return str;
        }
};
class Sub : public Base{
    private:
        double a,b,c;
	    public:
		Sub(Base* x,Base* y):Base(){a=x->evaluate(); b=y->evaluate();}
        virtual double evaluate(){c=a-b; return c;}
        virtual std::string stringify(){
                std::ostringstream strs;
                strs << c;
                std::string str = strs.str();
                return str;
        }
};
class Pow : public Base{
    private:
        double a,c;
    public:
        Pow(Base* x):Base(){a=x->evaluate;}
        virtual double evaluate(){c=a*a; return c;}
        virtual std::string stringify(){
                std::ostringstream strs;
                strs << c;
                std::string str = strs.str();
                return str;
        }
};

#endif //__OP_HPP__
