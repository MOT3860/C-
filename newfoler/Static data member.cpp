#include<iostream>
#include<conio.h>
using namespace std;
class StaticTest{
	public:
		static int count;
	private:
	    int order;
	public:
	    StaticTest(){
	    	count++;
	    	order=count;
		}		
		~StaticTest(){
			cout<<"Object "<<order<<"was destoryed. \n";
			count--;
		}
		void print(){
			cout<<"This is an object"<<order<<".\n";
		}
};
int StaticTest::count=0;
int main(){
	StaticTest obj1;
	obj1.print();
	cout<<"There are"<<StaticTest::count<<"object alive. \n\n";
	StaticTest* p=new StaticTest;
	p->print();
	StaticTest* q=new StaticTest;
	q->print();
	StaticTest obj2;
	obj2.print();
	cout<<"There are"<<StaticTest::count<<"objects alive\n\n";
	delete p;
	delete q;
	cout<<"There are "<<StaticTest::count<<"object alive\n\n";
}