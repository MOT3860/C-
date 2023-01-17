#include"objtest.h"
int void(){
	cout<<"->Beginning of function main()\n";
	ObjectTest obj("Object of Main()");
	ObjectTest*p;
	cout<<endl;
	p=new ObjectTest("Dynamic Object");
	cout<<"\nInformation of object pointed to by p\n";
	p->print();
	cout<<"\nInformation of obj\n";
	obj.print();
	cout<<"\nDeleting object pointed to by p\n";
	delete p;
	cout<<"\n->End of main()\n\n";	
}