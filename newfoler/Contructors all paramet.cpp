#include<iostream>
using namespace std;
class Sample{
	private:
		int data1;
		int data2;
	public:
	    Sample(int one=10,int two=20){
	    	data1=one;
	    	data2=two;
		}	
		Sample(Sample&other);
		void setData(int one,int two){
			data1=one;
			data2=two;
		}
		int getData1(){
			return data1;
		}
		int getData2(){
			return data2;
		}
		void read(){
			cout<<"Input data1 :";
			cin>>data1;
			cout<<"Input data2 :";
			cin>>data2;
		}
		void print(){
			cout<<"Data1 :"<<data1<<endl;
			cout<<"Data2 :"<<data2<<endl;
		}
};
int main(){
	Sample obj1; //initialized by default value(10,20)
	Sample obj2(35,50); //initialized by default (35,50)
	cout<<"Initialization of obj1\n:";
	obj1.print();
	cout<<endl;
	cout<<"Initialization of obj2\n:";
	obj2.print();
}