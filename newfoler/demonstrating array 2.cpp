// Demostrating of array of object 2
#include"rectangl.h"
#include<conio.h>

void sort(Rectangle[],int);
int main(){
	Rectangle recs[50];
	iint n=0;
	
	cout<<"Input rectangles";
	do{
		cout<<"\nRectangle"<<(n+1)<<endl;
		recs[n++].read();
		if(n>=50)break;
		cout<<"\nESC to stop\n";
	}while (getch()!=27); //27 is ASCII code for ESC key
	
	cout.setf(ios::fixed|ios::showpoint);
	cout.precision(2);
	
	cout<<"\nAll retacgle (not sorting)\n";
	cout<<"Width\tLength\tArea\n";
	for(int k=0;k<n;k++)recs[k].println();
	getch();
	
	cout<<"\nAll rectangle (sorting in ascending oof area)\n";
	cout<<"width\tLength\tArea\n";
	for(k=0;k<n;k++) recs[k].pintln();
	getch();
}
void sort(Rectangle rec[],int n){
	Rectangle temp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if (recs[i].area()>rec[j].area()){
		temp = rec[i];
		rec[i]=rec[j];
		rec[j]=temp;
	}
}