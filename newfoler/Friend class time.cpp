#include<iostream>
using namespace std;
/*class Time grands friendship to class StudyCourse*/
class Time{
	friend  class StudyCourse; //declaraation to grand friendship
	private:
		int hour;
		int min;
		void validate();
	public:
	    Time(int h=0,int m=0):hour(h),min(m){
	    	validate();
		}	
		Time(Time &tm):hour(tm.hour),min(tm.min){
		}
		void print(){
			cout.fill('0');
			cout.setf(ios::right);
			cout.width(2);
			cout<<hour<<":";
			cout.width(2);
			cout<<min;
			cout.fill('');
		}
		void read(){
			cout<<"Hour :";
			cin>>hour;
			cout<<"Min :";
			cin>>min;
			validate();
		}
};
void Time::validate(){
	hour +=min/60;
	min %=60;
	if(min<0){
		min +=60;
		hour--;
    }
		hour %=24;
		if(hour<0)hour+=24;
}