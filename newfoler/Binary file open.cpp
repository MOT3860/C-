#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int x;
	ifstream f("integer.bin",ios::binary);
	if(f.fail()){
	cout<<"Can not open file :";
	return ;	
	}
	while(1){
		f.read((char*)&x,sizeof(int));
		if(f.eof())break;
		cout<<x<<"\t";
	}
	
	f.close();
	
	return 0;
}
