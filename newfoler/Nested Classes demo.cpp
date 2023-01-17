#include"stu_gpa.h"
void main(){
	Syutudents st1,st2;
	Student::GPA g; //object of inner class 
	st1.set(1002,"Khut Sophanna",95.3,83.5);
	g.set(100.0,65.3);
	st2.set(1001,"Neang Bart",g);
	cout<<"Information of student st1"<<endl;
	st1.println();
	cout<<endl;
	cout<<"Information of student st2"<<endl;
	st2.println();
	}