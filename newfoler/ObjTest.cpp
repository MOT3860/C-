#ifndef OBJECTTEST_H
#define OBJECTTEST_H
#include<iostream>
#include<string.h>
using namespace std;
class ObjectTest{
	private:
		char name[20];
	public:
	    ObjectTest(char*name="Unknow"){
	    	strcpy(this->name,name);
	    	cout<<"\""<<name<<"\"was created at location"<<this<<endl;
		}	
		~ObjectTest(){
			cout<<"I am \""<<name<<"\at location "<<this<<"was destroyed\n";
		}
		void print(){
			cout<<"I am \""<<name<<"\"(alive,at location"<<this<<")"<<endl;
		}
};