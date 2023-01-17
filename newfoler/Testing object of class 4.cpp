#include"objtest.h"
void func3(){
	cout<<"->Beginning of func3\n";
	ObjectTest obj("Local Object");
	obj.print();
	cout<<"->End of func3\n";
}
int maini(){
	cout<<"->Beginning of function main\n";
	ObjectTest obj("MainObject");
	cout<<"\nCalling func3\n";
	fnc3();
	cout<<"\nInformation of obj\n";
	obj.print();
	cout<<"\n->End of main\n\n";
}