#include"objtest.h"
void func2(ObjectTest&obj){
	cout<<"->Beginning of func2\n";
	obj.print();
	cout<<"->End of func2\n";
}
int main(){
	cout<<"->Beginning of function main()\n\n";
	ObjectTest obj("MainObject");
	cout<<"\nCalling func2 by reference using obj as argument\n";
	func2(obj);
	cout<<"\nInformation of obj\n";
	obj.print();
	cout<<"\n->End of main()\n\n";
}