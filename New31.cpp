#include<iostream>
#include<stdio.h>
using namespace std;
class person{
	public:
	    char Name[10];
		char addres[20]s;
		int phone;
	public:
		void fun(){
			cout<<"enter name"<<endl;
			cin>>Name;
			cout<<"enter address"<<endl;
			cin>>address;
			cout<<"enter phone No."<<endl;
			cin>>phone;
		}
};
class employee:public person{
	public:
		int id;
	public:
		void fun1(){
			cout<<"employ Id"<<endl;
			cin>>id;
		}
};
class manager:public person {
	public:
		char designation;
		char department;
		int salary;
	public:
		void fun2(){
			cout<<"designation"<<endl;
			cin>>designation;
			cout<<"department"<<endl;
			cin>>department;
			cout<<"salary"<<endl;
			cin>>salary;
		}
};
class final:public manager,public employee{
	public:
		void fun3(){
			cout<<"name of a person"<<Name;
			cout<<"address of a person"<<address;
			cout<<"phone no. of a person"<<phone;
			cout<<"Employ id of person"<<id;
			cout<<"designation"<<designation;
			cout<<"department"<<department;
			cout<<"salary"<<salary;
		}
};
int main(){
	person obj;
	obj.fun3();
}
