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
		Sample(Sample& other){
			data1=other.data1;
			data2=other.data2;
		}
		void setData(int one,int two){
			data1=one;
			data2=two;
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
	Sample obj1(99);  //initialization by default value (99,20)
	Sample obj2(35,50); //initialization by value (35,50)
	Sample obj3(obj1);  //initializatio by value of obj1
	Sample obj4=obj2; //initialization by value of obj2
	Sample obj5=Sample(5,6); //initiallization by another object
	cout<<"Initializetion of obj1 \n";
	obj1.print();
	cout<<"Initialization of obj2 \n";
	obj2.print();
	cout<<endl;
	cout<<endl;
	cout<<"Initialization of obj3 \n";
	obj3.print();
	cout<<endl;
	cout<<"Initialization of obj4 \n";
	obj4.print();
	cout<<endl;
	cout<<"Intialization of obj5 \n";
	obj5.print();
	cout<<endl;
	cout<<"Initialization of no named object\n";
	Sample(111,222).print();
}