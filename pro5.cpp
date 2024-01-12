/*5.)WAP which illustrates the use of public and private access modifiers.

ENTER ID = 4335
ENTER NAME = Dhruv
ENTER ROAL = Master_in_fultter
ENTER AGE = 18


4335
Dhruv
Master_in_fultter
18


*/


#include<iostream>
#include<string.h>

using namespace std;

class Employ{
		public :

		int id;
		char name[100];
		char roal[100];
		int age;

private :

	int salary;
	int exp;
	char city[100];
	char company[100];
};

int main(){

		int i;
		
		Employ d1;

		cout<<"ENTER ID = ";
		cin>>d1.id;

		cout<<"ENTER NAME = ";
		cin>>d1.name;

		cout<<"ENTER ROAL = ";
		cin>>d1.roal;

		cout<<"ENTER AGE = ";
		cin>>d1.age;
		
		cout<<endl<<endl;


	cout<<d1.id <<endl;
	cout<<d1.name <<endl;
	cout<<d1.roal <<endl;
	cout<<d1.age <<endl;



return 0;
}
