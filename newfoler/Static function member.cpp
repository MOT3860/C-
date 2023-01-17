#include<iostream>
#include<conio.h>
using namespace std;
class StaticTest{
	public:
		static int count;
		static void tell(){
			cout<<"There are"<<count<<"object alive. \n\n";
		}
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
	cout<<endl;
	StaticTest::tell();
	StaticTest*p=new StaticTest;
	p->print();
	StaticTest*q=new StaticTest;
	q->print();
	StaticTest obj2;
	obj2.print();
	cout<<endl;
	StaticTest::tell();
	delete p;
	delete q;
	cout<<endl;
	StaticTest::tell();
}