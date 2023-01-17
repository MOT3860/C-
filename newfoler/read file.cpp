#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	char ch;
 	ifstream f("Exception Handling 1.cpp");
 	while(1){
 		ch=f.get();
 		if(f.eof())break;
 		cout<<ch;
	 }
	 f.close();
	
	return 0;
}
