#include<iostream>
#include<stdio.h>
using namespace std;
class person{
	public:
	    char Name[10];
		char address[20];
		int phone;
	public:
		void fun(){
			
		}
};
class employee:public person{
	public:
		int id;
	public:
		void fun1(){

		}
};
class manager:public employee{
	public:
		char designation[20];
		char department[20];
		int salary;
	public:
		void fun2(){
			cout<<"enter name"<<endl;
			cin>>Name;
			cout<<"enter address"<<endl;
			cin>>address;
			cout<<"enter phone No."<<endl;
			cin>>phone;
			cout<<"employ Id"<<endl;
			cin>>id;
			cout<<"designation"<<endl;
			cin>>designation;
			cout<<"department"<<endl;
			cin>>department;
			cout<<"salary"<<endl;
			cin>>salary;
		}
};
int main(){
	manager obj1;
	obj1.fun2();
	return 0;
}
