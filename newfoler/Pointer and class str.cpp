#include<iostream>
#include"string.h"
using namespace std;
int main(){
string names[5];
string* p;
char temp[20];
// initialize five strings
for (int k=0;k<5;k++)
names[k].init();

cout<<"Input five names\n";
for(k=0;k<5;k++){
	cout<<"Names "<<(k+1)<<" :";
	cin.clear();
	cin.seekg(0,ios::end);
	cin.get(temp,20);
	names[k].set(temp);
}

/*Find the biggest string*/
p=names;
for(k=1;k<5;k++)
if(p->lessThan(names[k]))p=names+k;

cout<<"\nThe biggest name is \""<<p->get()<<"\".\n";

cout<<"\nAll names :\n";
for(k=0;k<5;k++)
cout<<names[k].get()<<endl;

//destory all names
for(k=0;k<5;k++)names[k].destory();
}