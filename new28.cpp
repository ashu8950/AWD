#include<iostream>
#include<stdio.h>
using namespace std;
	class Parent{
		public:
			Parent(){
				cout<<"yes I am parent"<<endl;
			}	
	};
	/*class Child:public Parent{
	};*/
	/*class Child{
		protected:
			Child(){
				cout<<"and it's me child"<<endl;
			}
	};
	class Bache:public Parent,public Child{
	};*/
	/*class chote:public Parent{
		public:
			chote(){
					cout<<"main hu chote"<<endl;
			}
	};
	class choti:public chote{
		public:
			choti(){
				cout<<"main hu choti"<<endl;
			}
	};*/
	class papa{
		public:
			papa(){
				cout<<"parent mere papa hai"<<endl;
		}
	};
	class bache:public Parent{
		public:
			bache(){
				cout<<"parent mere dadu hai"<<endl;
		}
	};
	class bachi:public papa,public Parent,public bache{
	};
int main(){
	bachi obj;
	return 0;
}
