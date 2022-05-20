#include<iostream>
using namespace std;
class Counter
{
    static int count;
    public:
   void printData()
    {
        cout<<count<<endl;
    }
    void inc()
    {
        count++;
    }
};
int Counter::count=0;
int main()
{
    Counter obj1, obj2;
    obj1.inc();
    obj2.inc();
    cout<<"Object1 Count:  ";
    obj1.printData();
    cout<<"Object2 Count:  ";
    obj2.printData();
}
