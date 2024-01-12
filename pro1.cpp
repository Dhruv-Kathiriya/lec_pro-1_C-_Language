/*
1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)

enter feet :- 8
enter inch :- 16
enter feet 1:- 4
enter inch 1:- 14

ans feet = 12
ans inch  = 30

ans :- 

feet = 9
inch = 4
feet = 5
inch = 2

*/

#include<iostream>
using namespace std;

class Distance{

		public:
			
		int feet;
		int inch;
};

int main(){
	
	Distance d;
	Distance d1;
	
	int sum=0,sum1=0;
	
	cout<<"enter feet :- ";
	cin>>d.feet;
	
	cout<<"enter inch :- ";
	cin>>d.inch; 
	
	cout<<"enter feet 1:- ";
	cin>>d1.feet;
	
	cout<<"enter inch 1:- ";
	cin>>d1.inch; 
	
	
	
	sum = d.feet+d1.feet;
	sum1 = d.inch+d1.inch;
	
		if(d.inch>=12){
		d.feet++;
	d.inch=d.inch-12;
	}
	
		if(d1.inch>=12){
		d1.feet++;
	d1.inch=d1.inch-12;
	}
	
	cout<<"ans feet = "<<sum<<endl;
	cout<<"ans inch  = "<<sum1<<endl;
	
	cout<<"feet = "<<d.feet<<endl;
	cout<<"inch = "<<d.inch<<endl;
	cout<<"feet = "<<d1.feet<<endl;
	cout<<"inch = "<<d1.inch<<endl;
	
	
	

return 0;
}
