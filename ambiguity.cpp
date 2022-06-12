#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class A{
    int a=5;
public:
    void display(){
        cout<<a<<endl;
    }
};
class B:public A{
    int b=10;
public:
    void display(){
        cout<<b<<endl;
    }
};

int main(){
    B b;
    b.display();
    b.A::display();
    b.B::display();
 
    return 0;
}