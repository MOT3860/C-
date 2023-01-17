#include<iostream>
#include<cmath>
using namespace std;
class Shape{
	protected:
	double x,y;
	public:
	    void get_data();
		double Area();
};
class Circle:public Shape{
	public:
		void get_data(){
			cout<< "input the Raduis of the Circle to find area";
			cin>> x;
		}
		double Area(){
		return 3.14*x*x;
		}
};
class Rectangle:public Shape{
	public:
		void get_data(){
			cout<< "input the width and lenght to find area:";
			cin >>x>>y;
		}
		double Area(){
			return x*y;
		}
};
class Triangle:public Shape{
	public:
	void get_data(){
		cout << "input the base and height of Triangle to find area:";
		cin >>x>>y;
	}
	double Area(){
		return 0.5*(x*y);
	}
};
class Square:public Shape{
	public:
	void get_data(){
		cout <<"input size of Square to find Area:";
		cin >>x;
	}
	double Area(){
		return x*x;
	}
};
int main(){
	Circle cr;
	Triangle tri;
	Rectangle rect;
	Square sq;
	Shape *sh[4];
	sh[0] = &cr;
	sh[1] = &tri;
	sh[2] = &rect;
	sh[3] = &sq;
	cout << "===========Calculate AREA of Different Shapes========="<<endl;
	cout << "Plz Enter your Choise"<<endl;
	cout << "0: Area of Circle"<<endl;
	cout << "1: Area of Triangle"<<endl;
	cout << "2: Area of Rectangle"<<endl;
	cout << "3: Area of Square "<<endl;
	int choise;	
	cout << "Enter choise:";
	cin >> choise;
	switch (choise){
		case 0:
			cr.get_data();	
			cout << cr.Area();
			break;
			case 1:
				tri.get_data();
				cout <<tri.Area();
				break;
				case 2:
					rect.get_data();
					cout <<rect.Area();
					break;
					case 3:
						sq.get_data();
						cout <<sq.Area();
						break;
		default : exit;		
	}
	return 0;
}

