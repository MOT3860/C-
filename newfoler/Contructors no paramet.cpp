#include<iostream>
using namespace std;
class Sample{
	private:
		int data1;
		int data2;
	public:
	    Sample(){
	    	data1=10;
	    	data2=20;
	    }
	    //Sample(int one,int two);
	    //Sample(Sample&other);
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
	Sample obj;//default construtor executes
	cout<<"Initialization of obj\n";
	obj.print();
	
	cout<<"\nNow data oof obj\n";
//	obj.setData(300,200);
	obj.print();
}
