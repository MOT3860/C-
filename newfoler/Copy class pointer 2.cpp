#include "point.h"
int main(){
	Point p1; 
	Point p2;(2,6);
	Point p3(p2);
	cout<<"p1 ia at";
	pi.println();
	cout<<"p2 is at";
	p2.println();
	cout<<"p3 is at";
	p3.println();
	cout<<endl;
	if(p1.equal(p2))
	cout<<"p1 and p2 are the same."<<endl;
	else
	cout<<"p1 i apart"<<p1.hasDistanceFrom(p2)<<"from p2."<<endl;
	if (p2.equal(p3))
	cout<<"p2 and p3 are the same."<<endl;
	else 
	cout<<"p2 is apart"<<p2.hasDistanceFrom(p3)<<"from p3."<<endl;
}