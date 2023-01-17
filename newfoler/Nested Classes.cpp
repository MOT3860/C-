#define STU_GPA_H
#define STU_GPA_H

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
 class Student{
 	//Inner class
 	public:
 		class GPA{
 			private:
 		       float sm;//smester score
 		       float ass;//assignmment score
 		    public:
			   void set(float s,float a){
			   	sm=s;
			   	ass=a;
			   }   
			   void read();
			   void print();
			   void prntln(){
			   	print();
			   	cout<<endl;
			   }
			   float value;
		};
		//end of inner class
	private:
	    int id;
		char name[20];
		GPA gpa;
	public:
	    void set(int i,char* n,float  s,float a);
		void set(int i,char* n,GPA&g);
		void read();
		void print();
		void println(){
			print();
			cout<<endl;
		}		
		float final(){
			return gpa.value();
		}
 };
 //Definitions of members defined in class GPA
 float Student::GPA::value(){
 	return sm*0.7+ass*0.3; //sm weights 70% ass weights 30%
 }
 void Student::GPA::read(){
 	cout<<"Semester score :";
 	cin>>sm;
 	cout<<"Assignment score :";
 	cin>>ass;
 }
 void Student::GPA::print(){
 	cout<<"Semester :"<<am<<endl;
 	cout<<"Assignment :"<<ass<<endl;
 	cout<<"GPA :"<<value();
 }
 //Definitions of members defined in class Student
 void Student::set(int i,char* n,float s,float a){
 	id=i;
 	strcpy(name,n);
 	gpa=g;
 }
 void Student::read(){
 	cout<<"Identification :";
 	cin>>id;
 	cout<<"Name :";
 	cin.clear();
 	cin.seekg(0,ios::end);
 	cin.get(name,20);
 	gpa.read();
 }
 void Student::GPA::print(){
 	cout<<"Identification :"<<id<<endl;
 	cout<<"Name :";
 	cout<<name<<endl;
 	gpa.print();
 }
 #endif
 