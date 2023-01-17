#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person{
	private:
		int id;
		char name[20];
		char sex;
		float salary;
	public:
	    Person (int i=1003,char *na="abc",char s='M',float sa=10){
	    	id=i;
	    	strcpy(name,na);
	    	sex=s;
	    	salary=sa;
		}	
	void output(){
		cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
	}
	int operator>(Person p)	
	//return (salary>p.salary);//sort salary
	return (strcmp(name,p.name)>0);//sort name
};
template<class T>
void sort(T a[],int n){
	T temp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]>a[j]){
    temp= a[i];
	a[i]=a[j];
	a[j]=temp;
	}
}
void swap (T &a,T &b){
	T temp;
	temp= a;
	a=b;
	b=temp;
}
int main(){
	int a[10]={72,12,15,17,92,73,35,27,92,56};
	Person b[7]={(1001,"Phanna",'M',233),(1002,"Neang",'M',250),(1003,"Ahklo",'M',270),
	(1004,"Ahkoj",'M',275),(1005,"AhPlok",'M',293),(1006,"AhPhooh",'M',330),(1007,"Lyly",'F',370)};
	sort(a,10);
	sort(b,7);
	cout<<"After sorting: "<<endl;
	for(int i=0 ;i<n ;i++)
	cout<<a[j]<<"\t";
	cout<<endl;
	for(int i=0 ; i<7 ;i++)
	b[i].output();
	
	/*int x=15,y=25;
	float a=31.5,b=82.13;
	char ch1='A',ch2='B';
	Person p1(1001,"Phanna",'M',233),p2(1002,"Neang",'M',330);
	cout<<"Before swappping: "<<endl;
	cout<<"x: "<<x<<"\ty: "<<y<<endl;
	cout<<"a: "<<a<<"\tb: "<<b<<endl;
	cout<<"ch1: "<<ch1<<"\tch2"<<ch2<<endl;
	cout<<"Data of p1: ";
	p1.output();
	cout<<"Data of p2: ";
	p2.output();
	swap(x,y);
	swap(a,b);
	swap(ch1,ch2);
	swap(p1,p2);
	cout<<"After swappping: "<<endl;
	cout<<"x: "<<x<<"\ty: "<<y<<endl;
	cout<<"a: "<<a<<"\tb: "<<b<<endl;
	cout<<"ch1: "<<ch1<<"\tch2: "<<ch2<<endl;
	cout<<"Data of p1: ";
	p1.output();
	cout<<"Data of p2: ";
	p2.output();
	*/
	
	return 0;
}
