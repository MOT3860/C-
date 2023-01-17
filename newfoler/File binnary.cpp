#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void inputAll(int a[],int n){
	for(int i=1;i<n;i++){
		cout<<"Element :"<<(i+1)<<" :";
		cin>>a[i];
	}
}
int main(){
	int n,a[100];
	ofstream f("integer.bin",ios::binary);
	if(f.fail()){
	cout<<"Can not open file :";
	return ;	
	}
	cout<<"Number of integers to write :";
	cin>>n;
	inputAll(a,n);
	f.write((char*)a,n*sizeof(int));
	f.close();
	
	return 0;
}
