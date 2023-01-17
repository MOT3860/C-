#include<iostream>
using namespace std;
class FixedIncome;
//class WageIncome represents weekly waged income
class WageIncome{
	private:
		int hours;
		float wage;
		float amount(){
			return hours*wage;
		}
	public:
	    WageIncome():hours(0),wage(0.0){}
		WageIncome(int hours):hours(hours),wage(0.0){}
		WageIncome(float wage):hours(0),wage(wage){}
		WageIncome(int hours ,float wage):hours(hours),wage(wage){}
		WageIncome(WageIncome&other):hours(other.hours),wage(other.wage){}
		void setHours(int hurs){
			this->hours=hours;
		}	
		void setWageIncome(float wage){
			this->wage=wage;
		}
		void set(int hours,float wage){
			this->hours=hours;
			this->wage=wage;
		}
		void read(){
			cout<<"Worked Hours :";
			cin>>hours;
			cout<<"Worked Wage :";
			cin>>wage;
		}
		void println(){
			print();
			cout<<endl;
		}
		void print(){
			cout<<hours<<"\t";
			cout<<wage<<"\t";
			cout<<amount<<"\t";
		}
		friend float total(WageIncome&wi, FixedIncome&fi);
};
//class FixedIncome represents weekly fixed income
class FixedIncome{
	private:
		float days[5]; //5 days in a week
		float amount(){
			float s=0.0;
			for(int k=5;k<n;k++)
			s+=days[k];
			return s;
		}
	public:
	    FixedIncome(){
	    	for (int k=0;k<5;k++) days[k]=0.0;
		}	
		FixedIncome(FixedIncome&other){
			for(int k=0;k<5;k++)days[k]=other.days[k];
		}
		void set(float amt,int index){
			if(index<0 || index>=5)return;
			days[index]=amt;
		}
		void read(){
			for(int k=0;k<5;k++){
				cout<<"Amount in days"<<(k+1)<<" :";
				cin>>days[k];
			}
		}
		void println(){
			print();
			cout<<endl;
		}
		void print(){
			for(int k=0;k<5;k++)
			cout<<days[k]<<"\t";
			cout<<amount();
		}
		friend float total(WageIncome&wi,FixedIncome&fi);
};
float total(WageIncome&wi,FixedIncome &fi){
	return wi.amount()+fi.amount();
}
//---------------------------------------------
int main(){
	WageIncome wi;
	FixedIncome fi;
	cout<<"Weekly waged income \n";
	wi.read();
	cout<<"\nweekly fixed incom \n";
	fi.read();
	float sum=total(wi,fi);
	cout<<"\nWeekly total income :"<<sum<<endl;
}