#include<iostream>
#include<stdio.h>
using namespace std;
class ITEM{
	public:
		int item;
		char name[10];
		int price;
		void fun(){
			
		}
};
class discount:public ITEM{
	int discountpercent;
	public:
		void fun1(){
			cout<<"item:"<<endl;
			cin>>item;
			cout<<"name:"<<endl;
			cin>>name;
			cout<<"price:"<<endl;
			cin>>price;
			cout<<"discount-percent"<<endl;
			cin>>discountpercent;
		}
	public:
		void fun2(){
			cout<<"item:"<<item<<endl;
			cout<<"item name:"<<name<<endl;
			cout<<"price:"<<price<<endl;
			cout<<"discount-percent:"<<discountpercent<<endl;
		}
};
int main(){
	int n;
	cout<<"enter the no of items:";
	cin>>n;
	discount obj1[10];
	for (int i=1;i<=n;i++)
	{
	obj1[i].fun1();
	
	}
	for (int i=1;i<=n;i++)
	{
	obj1[i].fun2();}
	return 0;
}
