#include"point.h"
int main(){
	int k;
	Point ps[14];
	Point ts[3]={
	Point (1,2);
	Point (4,3);
	Point (3,2);
	};
	cout<<"Initialized of array ps\n";
	for(k=0;k<4;k++){
		cout<<"ps["<<k<<"]"=";
		ts[k].println();
	}
	float d1=ts[0].hasDistanceFrom(ts[1]);
	float d2=ts[1].hasDistanceFrom(ts[2]);
	float d3=ts[2].hasDistanceFrom(ts[3]);
	if(d1>=d2+d3 || d2>=d3+1 || d3>=d1+d2)
	cout<<""These 3 point cannot make atriangle."<<endl;
	else
	cout<<"These 3 points can make a trangle :"<<endl;
}