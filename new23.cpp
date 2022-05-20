#include<iostream>
#include<stdio.h>
using namespace std;
class Employ
{
	
	public:
		int salary;
		string name;
fun(){
	cout<<"salary of a person"<<endl;
   	cin>>salary;
   	cout<<"name of person"<<endl;
   	cin>>name;
   }
   void display(){
   	cout<<"salary : "<<salary<<endl;
	   cout<<"name : "<<name<<endl;
   }
};
int main(){
	Employ object1;
	object1.fun();
	object1.display();
};
	
