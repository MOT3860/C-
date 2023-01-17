#include"point.h"
int main(){
	int n;
	Point base(3,3);
	cout<<"The base point is ";
	base.println();
	again:
		cout<<"\nHow many points around the base point :";
		cin>>n;
		if(n>10){
			cout<<"Too many point\n";
			goto again;
		}
		Point* pa=new Point[n];
		cout<<"Input "<<n<<"point\n";
		for(int k=0;k<n;k++){
			cout<<"Point "<<(k+1)<<endl;
			pa[k].read();
			cout<<endl;
		}
		cout<<"\nHere are all points around the base point\n";
		for(k=0;k<n;k++){
			pa[k].print();
			if(k!=n-1)cout<<", ";
		}
		//find a pointer has longuest distance from the base point
		Point* temp=pa;
		for(k=1;k<n;k++)
		if(base.hasDistanceFrom(*temp)<base.hasDinstanceFrom(pa[k]))
		temp=pa+k;
		cout<<"\n\nPoint is longuest apart from the base point is ";
		temp->println();
		delete[].pa; //release memory space
}