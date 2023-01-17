#include<iostream>
using namespace std;
//class Test{
//	const int i;
//	public :
//		Test (int x):i(x){
//			cout << " I val :"<< i<<endl;
//		}
//		
//};
//int main (){
//	Test t (10);
//	Test s(20);
//	return 0;
//}
class Box {
	private :
		double lenght,height,width;
		public :
			Box (double lv, double wv,double hv);
			Box ();
			double volume();
		
};
 Box::Box(double lv, double wv, double hv){
	lenght= lv;
	height= hv;
	width= wv;
}
Box::Box(){
}
 double Box::volume(){
	return lenght*height*width;
}
int main (){
	Box obj(10.10,30.30,20.20);
	cout << obj.volume()<<endl;
}