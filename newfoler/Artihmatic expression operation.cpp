#include"arithexp.h"
#include<math.h>
int main(){
	ArithExp e1(9.0,'-',3.0);
	ArithExp e2(36.0,'/',5.0);
	cout.setstate(ios::fixed|ios::showpoint);
	cout.precision(2);
	cout<<"Expression e1\n";
	e1.println();
	cout<<endl;
	if(e1.isEqual(e2))
	  cout<<"Both expression are equal.\n";
	else
	  cout<<"Different between them is"<<fabs(compare(e1,e2))<<endl;
}