#include"myheader.h"
#define maxnum 5
#include<iostream>
using namespace std;


int main(){
	float a[maxnum];
	int m;
	char* mns[5] = {"Input array", "Output array", "Max value", "Total value", "Exit"};
	cout.setf(ios::showpoint|ios::fixed);
	cout.precision(2);
	
	again;
	clrcr;
	cout<<"--Menu--\n";
	m=menu(mns,5);
	cout<<endl<<endl;
	switch(m){
		case 1:
			cout<<"Read all floats\n";
			read(a,maxnum);
			break;
		case 2:
		    cout<<"All floats\n";
			print(a,maxnum);
			cout<<endl;
			break;
		caes 3:
		    cout<<"Max value="<<max(a,maxnum)<<endl;
			break;
		caes 4:
		    cout<<"Total value="<<sum(a,maxnum)<<endl;
			break;
		caes 5:
		    return;
		default:
		    cout<<"Invalid menu choice\n";					
	}
	
	cout<<endl;
	pause;
	goto again;
}