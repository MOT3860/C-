#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
class Student{
	private:
		int id;
		char name[20];
		char sex;
		float average;
	public:	
	Student();
	Student(int i,char* na,char s,float a);
	void input(){
		cout<<"Id :";
		cin>>id;
		cout<<"Name :";
		cin.seekg(0,ios::end);
		cin.clear();
		cin.get(name,20);
		cout<<"Sex :";
		cin>>sex;
		cout<<"Average :";
		cin>>a
		verage;
	}
	void output(){
		cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<average<<"\t"<<endl;
	}
	void set(int i,char* na,char s,float a){
		id=i;
		strcpy(name,na);
		sex=s;
		average=a;
	}
	int getId(){
		return id;
	}
};
Student::Student(){
	id=1002;
	strcpy(name,"Phanna");
	sex='M';
	average=10;
}
Student::Student(int i,char*na,char s,float a){
	id=i;
	strcpy(name,na);
	sex=s;
	average=a;
}
void readData(char *fname){
	Student *x;
	int n;
	ifstream f(fname,ios::binary);
	if(f.fail()){
		cout<<"File can not openn:";
		getch();
		return ;
	}
	f.seekg(0,ios::end);
	n=f.tellg()/sizeof(Student);
	f.seekg(0,ios::beg);
	x=new Student[n];
	f.read((char*)x,n*sizeof(Student));
	f.close();
	for(int i=0;i<n;i++)
	x[i].output();
}
void writeData(char* fname){
	Student *x;
	int n;
	ofstream f(fname,ios::binary);
	if(f.fail()){
		cout<<"File can nor open :";
		getch();
		return;
	}
	cout<<"Number of students :";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Student "<<(i+1)<<":"<<endl;
		x[i].input();
	}
	f.write((char*)x,n*sizeof(Student));
	f.close();
}
void append(char* fname){
	Student *x;
	int n;
	fstream f(fname,ios::binary|ios::app);
	if(f.fail()){
		cout<<"File can not open :";
		getch();
		return;
	}
	cout<<"Number of students :";
	cin>>n;
	x=new Student[n];
	for(int i=0;i<n;i++){
	cout<<"Student "<<(i+1)<<":"<<endl;
	x[i].input();	
	}
	f.write((char*)x,n*sizeof(Student));
	f.close();
}
void remove(char* fname ){
	Student *x;
	int n,idRe;
	ifstream f;
	f.open(fname,ios::binary);
	if(f.fail()){
		cout<<"File can not open :";
		getch();
		return;
	}
	f.seekg(0,ios::end);
	n=f.tellg()/sizeof(Student);
	f.seekg(0,ios::beg);
	x=new Student[n];
	f.read((char *)x,n*sizeof(Student));
	f.close();
	ofstream f1(fname,ios::binary);
	if(f1.fail()){
		cout<<"File can not open :";
		getch();
		return;
	}
	cout<<"Id to remove :";
	cin>>idRe;
	for(int i=0;i<n;i++)
	if(x[i].getId()!=idRe)f1.write((char*)&x[i],sizeof(Student));
	f1.close();
}
void update(char* fname){
	Student *x;
	int n,idup,pos;
	ifstream f;
	f.open(fname,ios::binary);
	if(f.fail()){
		cout<<"File can not open :";
		getch();
		return;
	}
	f.seekg(0,ios::end);
	n=f.tellg()/sizeof(Student);
	f.seekg(0,ios::beg);
	x=new Student[n];
	f.read((char *)x,n*sizeof(Student));
	f.close();
	ofstream f1(fname,ios::binary);
	if(f1.fail()){
		cout<<"File can not open :";
		getch();
		return;
	}
	cout<<"Id to update :";
	cin>>idup;
	pos=0;
	for(int i=0;i<n;i++)
	if(x[i].getId()==idup){
		pos=i;
		break;
	}
	cout<<"Data of student to update :"<<endl;
	x[pos].input();
	f1.write((char*)x,n*sizeof(Student));
	f1.close();
	}
	int main(){
		char filename[20],ch;
		int select;
		again:
		cout<<"1(write),2(read),3(append),4(update),5(remove) :";
		cin>>select;
		switch(select){
			case 1:
				cout<<"File name to write :";
				cin.seekg(0,ios::end);
				cin.clear();
				cin.get(filename,20);
				writeData(filename);
				break;
			case 2:
			    cout<<"File name to read :";
			    cin.seekg(0,ios::end);
			    cin.clear();
			    cin.get(filename,20);
			    readData(filename);
			    break;
			case 3:
			    cout<<"File name to append :";
				cin.seekg(0,ios::end);
				cin.clear();
				cin.get(filename,20);
				append(filename);
				break;
			case 4:
			    cout<<"File name to update :";
			    cin.seekg(0,ios::end);
			    cin.clear();
			    cin.get(filename,20);
			    update(filename);
			    break;
			case 5:
			    cout<<"File name to remove :";
			    cin.seekg(0,ios::end);
			    cin.clear();
			    cin.get(filename,20);
			    remove(filename);
			    break;
			default:cout<<"Try again :";				
		}
		cout<<"Press y to continue:";
		cin.seekg(0,ios::end);
		cin.clear();
		cin>>ch;
		if(ch=='y')goto again;
		
		return 0;
	}
