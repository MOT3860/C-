#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void write(char *fname){
	ofstream f;char ch;//open with constrator
	//ofstream f (fname);//ope with function member
	f.open(fname);
	if(f.fail()){//f is obj string
		cout<<"File can not open :";
		return;

	}
	while(1){
		//ch=getchar();
		ch=cin.get();// get for read 
		if(ch=='#')break;// break use character # break
		f.put(ch);// put for write
	}
	f.close();
}
void read(char *fname){
	ifstream f;char ch;//open with constrator
	//ofstream f (fname);//ope with function member
	f.open(fname);
	if(f.fail()){//f is obj string
		cout<<"File can not open :";
		return;

	}
	while(1){
		//ch=getchar();
		ch=f.get();// get for read 
		if(f.eof())break;// break use character # break
		//f.put(ch);// put for write
		cout<<ch;
	}
	f.close();
}
void append(char *fname){
	fstream f; char ch;
	f.open(fname,ios::app);
	if(f.fail()){
		cout<<"File can not open :";
		return;
		
	}
	while(1){
		//ch=getchar();
		ch=cin.get();
		if(ch=='#')break;
		f.put(ch);
	}
	f.close();
}
void copy(char *fname1,char *fname2){
	ifstream f1;char ch;
	ofstream f2;
	f1.open(fname1);
	if(f1.fail()){
		cout<<"File can not open :";
		return;
		
	}
	f2.open(fname2);
	if(f2.fail()){
		cout<<"File can not open :";
		return;
	}
	while(1){
		ch=f1.get();
		if(f1.eof())break;
		f2.put(ch);
	}
	f1.close();
	f2.close();
}
int main(){
	char name[20],name1[20],select;
	cout<<"Write(w),Read(r),Append(a),Copy(c) :";
	cin>>select;
	switch(select){
		case'w':
		cout<<"File name to write :";
		cin>>select;
		write(name);
		break;
	case'r':
	    cout<<"File name to read :";
		cin.seekg(0,ios::end);
		cin.clear();
		cin.get(name,20);
		read(name);
		break;
	case'a':
	cout<<"File name to appenf :";
	cin.seekg(0,ios::end);
	cin.clear();
	cin.get(name,20);
	append(name);
	break;	
	case'c':
	    cout<<"File name to copy :";
	    cin.seekg(0,ios::end);
		cin.clear();
		cin.get(name,20);
		cin.get(name1,20);
		copy(name,name1);
		break;		
	}
	return 0;
}
