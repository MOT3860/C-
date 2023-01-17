#ifndef ARITHEXP_H
#define ARITHEXP_H
#include<iostream>
#include<stdlib.h>
using namespace std;
class ArithExp; //forward decleartion
float compare(ArithExp&exp1,ArithExp&exp2);
class ArithExp{
	private:
		float opd1;
		float opd2;
		char opt;
	public:
	    ArithExp():opd1(0.0),opd2(0.0),opt('+'){
		}	
		ArithExp(float opd1,char opt,float opd2)
		:opd1(opd1),opd2(opd2){
			this->opt=opt;
		}
		ArithExp(ArithExp&other)
		:opd1(other.opd1),opd2(other.opd2),opt(other.opt){
		}
		void setOpd1(float opd1){
			this->opd1=opd1;
		}
		void setOpd2(float opd2){
			this->opd2=opd2;
		}
		void setOpt(char opt){
			this->opt=opt;
		}
		void set(float opd1,char opt,float opd2){
			this->opd1=opd1;
			this->opd2=opd2;
			this->opt=opt;
		}
		int isEqual(ArithExp&other){
			return compare(*this,other)==0;
		}
		float value(){
			switch(opt){
				case '+':
					return opd1+opd2;
				case '-':
				    return opd1-opd2;
				case '*':
				    return opd1*opd2;
				case '/':
				    return opd1/opd2;
				default:
				       cout<<"Invalid operation,"<<opt<<endl;
					   exit(1);				
			}
		}
		void read(){
			cout<<"Give expression(eg.34.5+55) :";
			cin>>opd1>>opt>>opd2;
		}
		void print(){
			cout<<"Exp :"<<opd1<<""<<opt<<""<<opd2<<endl;
			cout<<"value :"<<value();
		}
		void println(){
			print();
			cout<<endl;
		}
};
float compare(ArithExp&exp1,ArithExp&exp2){
			return exp1.value()-exp2.value();
}
#endif
//-------------------------------------------------------