#include"objtest.h"
void func1(ObjectTest obj){
	cout<<"->Beginning of func1\n";
	obj.print();
	cout<<"->End of func1\n";
}
int main(){
	cout<<"->Begining of function main()\n\n";
	ObjectTest obj("MainObject");
	cout<<"\nInformation of obj\n";
	obj.print();
	cout<<"\nCalling func1()using obj as argument\n";
	func1(obj);
	cout<<"\n\nEnd of main()\n\n";
}