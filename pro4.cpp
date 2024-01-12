/*
4. WAP to create a class which Read and Print House details along with Room details.

enter house_number :- 85
enter  bhk:- 23
enter residency_name :- shiv-shakti
enter area:- pasodara
enter city:- surat
enter state:- gujrat
house_number = 85
bhk = 23
residency_name = shiv-shakti
area= pasodara
city = surat
state = gujrat

*/
#include<iostream>
#include<string.h>
using namespace std;

class house{
	public:
	
	int house_number;
	int bhk;
	char residency_name[100];
	char area[100];
	char city[100];
	char state[100];
	
};

int main(){
	
	house s;
	
	
	cout<<"enter house_number :- ";
	cin>>s.house_number;
	cout<<"enter  bhk:- ";
	cin>>s.bhk;
	cout<<"enter residency_name :- ";
	cin>>s.residency_name;
	cout<<"enter area:- ";
	cin>>s.area;
	cout<<"enter city:- ";
	cin>>s.city;
	cout<<"enter state:- ";
	cin>>s.state;
	
	cout<<"house_number = "<<s.house_number<<endl;
	cout<<"bhk = "<<s.bhk<<endl;
	cout<<"residency_name = "<<s.residency_name<<endl;
	cout<<"area= "<<s.area<<endl;
	cout<<"city = "<<s.city<<endl;
	cout<<"state = "<<s.state<<endl;

	return 0;
	
	
}
