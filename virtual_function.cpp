#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class base{
    public:
        int b;
        virtual void display(){
            cout<<"b: "<<b<<endl;
        }
};
class derived1:public base{
    public:
        int d1;
        void display(){
            cout<<"d1: "<<d1<<endl;
        }
};
class derived2:public base{
    public:
        int d2;
        void display(){
            cout<<"d2: "<<d2<<endl;
        }
};

int main(){
    
    base b;
    base *bptr[2];
    derived1 D1;
    derived2 D2;
    b.b=10;
    D1.d1=20;
    D2.d2=30;
    bptr[0]=&D1;
    bptr[1]=&D2;
    bptr[0]->display();
    bptr[1]->display();
 
    return 0;
}