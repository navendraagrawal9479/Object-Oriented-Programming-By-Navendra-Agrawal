#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class base{
    public:
        int b;
        void display(){
            cout<<"b: "<<b<<endl;
        }
};
class derived:public base{
    public:
        int d;
        void display(){
            cout<<"d: "<<d<<endl;
        }
};

int main(){
    derived d;
    d.d=20;
    base *bptr;
    base b;
    bptr=&d;
    bptr->b=10;
    bptr->display();
 
    return 0;
}   