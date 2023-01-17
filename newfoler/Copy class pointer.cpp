#ifndef POINT_H
#define POINT_H
#include<iostream>
#include<math.h>
using namespace std;
class Point{
	private:
		float x;
		float y;
	public:
	    Point():x(0.0),y(0.0){
		}
		Point(float a,float b):x(a),y(b){
		}	
		Point(const Point&other):x(other.x),y(other.y){
		}
		void read(){
			cout<<"x :";
			cin>>x;
			cout<<"y :";
			cin>>y;
		}
		void println(){
			print();
			cout<<endl;
		}
		void print(){
			cout<<"<<x<<","<<y<<";
		}
		int equal(Point&other){
			return x==other.x && y==other.y;
		}
		float hasDistanceFrom(Point &other){
			float dx=x-other.x;
			float dy=y-other.y;
			return sqrt(dx*dx+dy*dy);
		}
};
#endif