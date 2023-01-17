#include<string.h>
//Class StudyCourse, friend class of class Time, obtain friendship from class Time
class StudyCourse{
	public:
		char course[20];
		Time start;
		long toMins(){
			return start.hour*60+start.min;
		}
	public:
	    StudyCourse (char* course="unknown"){
	    	strcpy(this->course,course);
		}	
		StudyCourse(char* course,Time&start);
		StudyCourse(char* course,int hour,int main);
		void setStartTime(Time&start);
		void setStartTime(int hour,int min);
		void setCourse(char* course);
		void println(){
			print();
			cout<<endl;
		}
		void print();
		char* getCourse(){return course;
		}
		Time getStartTime(){
			return start;
		}
		friend void sortByStartTime(StudyCourse sc[],int n);
};
StudyCourse::StudyCourse(char* course,Time&start):start(start){strcpy(this->course,course);
}
StudyCourse::StudyCourse(char* course,int hour,int min){
	strcpy(this->course,course);
	setStartTime(hour,min);
}
void StudyCourse::setStartTime(Time&start){
	this->start=start;
}
void StudyCourse::setStartTime(int hour,int min){
	start.hour=hour; //hour is accessible here
	start.min=min; //min is accessible here
	start.varible(); //validate() is accessible here
}
void StudyCourse::setCourse(char* course){
	strcpy(this->course,course);
}
void StudyCourse::print(){
	cout.setf(ios::left);
	cout.width(20);
	cout<<course<<"\t";
	start.print();
}
void sortByTime(StudyCourse sc[],int n){
	StudyCourse temp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(sc[i].toMains()>sc[j].to.Mins()){
		temp =sc[i];
		sc[i]=sc[j];
		sc[j]=temp;
	}
}
int main(){
	Studycourse scs[5]={
	"C++PL",
	"Microprocessor",
	"Database",
	"Data Structure",
	"Data Commun"};
	int hour,min;
	StudyCoure::printHeading();
	cout<<"--------------------\n";
	for(int k=0;k<5;k++)
	scs[k].println();
	cout<<"\nInput times for all study courses \n";
	for(k=0;k<5;k++){
		cout<<"For "<<scs[k].getCourse()<<endl;
		cout<<"Hour :";
		cin>>hour;
		cout<<"Min :";
		cin>>min;
		scs[k].setStartTime(hour,min);
		cout<<endl;
	}
	StudyCourse::printHeading();
	cout<<"-------------------\n";
	for(k=0;k<5;k++)
	scs[k].println();
	sortByStartTime(scs,5);
	cout<<"\nAfter sorting\n\n";
	StudyCourse::printHeading();
	cout<<"-------------------\n";
	for(k=0;k,5;k=++)
	scs[k].println();
}