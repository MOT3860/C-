//Class rectagle represnting a rectangle
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
using namespace std;

class Rectangle{
	private:
		float width;
		float length;
	public:
	    void setLength(float lng){
	    	length=lng;
		}	
		void setWidth(float wd){
			width=wd;
		}
		float getWidth(){
		return width;
	    }
	    float getLength(){
	    	return length;
		}
		float area(){
			return width * length;
		}
		void read();
		void print();
		void println(){
			print();
			cout<<endl;
		}
};
void Rectangle::read(){
	cout<<"Width :";
	cin>>width;
	cout<<"Length :";
	cin>>length;
}
void Rectangle::print(){
	cout<<width<<'\t';
	cout<<length<<'\t';
	cout<<area();
	}
	#endif
	/*-------------------------------------------------*/
	
	