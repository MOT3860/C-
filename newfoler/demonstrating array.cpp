// Demonstrating of array of object
#include "rectangl.h"
int main(){
	Rectangle recs[5];
	
	float wds[5]= {4.0,5.0,2.0,7.0,6.0};
	float lngs[5]= {7.0,6.0,9.0,7.0};
	
	for(int k=0;k<5;k++){
		recs[k].setWidth(wds[k]);
		recs[k].setLength(lngs[k]);
	}
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);
	
	cout<<"All rectangle are \n";
	cout<<"No\tWidth\tLength\tArea\n";
	for(k=0;k,5;k++){
		cout<<(k+1)<<"\t";
		recs[k].println();
	}
}