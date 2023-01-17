#include<iostream>
using namespace std;

class TwoNumbers{
	private:
		float first;
		float second;
	public:
	    void assign(float a,float b){
	    	first=a;
	    	second=b;
		}	
		float getFirst(){
		return first;
		}
		float getSecond(){
			return second;
		}
		float sum(){
			return first + second;
		}
		float sub(){
			return first - second;
		}
		void read();
		void print();
};
void TwoNumbers::read(){
	cout<<"First number :";
	cin>>first;
	cout<<"Second number :";
	cin>>second;
}
void TwoNumbers::print(){
	cout<<"First :"<<first<<endl;
	cout<<"Second :"<<second<<endl;
	cout<<"Sum :"<<sum()<<endl;
	cout<<"Sub :"<<sub()<<endl;
}
int main(){
	cout.setf(ios::showpoint|ios::fixed);
	cout.precision(2);
	TwoNumbers obj;
	obj.assign(30,25);
	cout<<"Information of two numbers\n";
	obj.print();
	
	int f=obj.getFirst();
	int s=obj.getSecond();
	obj.assign(f*f,s*s);
	cout<<"\nAfter making them squared,";
	cout<<"Information of two numbers\n";
	obj.print();
	
	cout<<"\nInput two numbers\n";
	obj.read();
	
	cout<<"\nInformation of two numbers input\n";
	obj.print();
}
