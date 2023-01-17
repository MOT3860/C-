#include<iostream>
#include<conio.h>
using namespace std;
class FriendTest{
	private:
		float x;
		float y;
	private:
	    void read(){
	    	cout<<"Input x,y :";
	    	cin>>x>>y;
	    }
	    	friend int sum(FriendTest&ftest){
	    		return ftest.x+ftest.y;
			}
			friend void print(FriendTest&ftest);	
};
void print(FriendTest&ftest){
	cout<<"x ="<<ftest.x<<"\t";
	cout<<"y ="<<ftest.y<<"\t";
	cout<<"sum ="<<sum(ftest)<<endl;
}