#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class A{
    protected:
        int a;
    public:
        void get_a(){
            cout<<"Enter a:\n";
            cin>>a;
        }
};
class B{
    protected:
        int b;
    public:
        void get_b(){
            cout<<"Enter b:\n";
            cin>>b;
        }
};
class C{
    protected:
        int c;
    public:
        void get_c(){
            cout<<"Enter c:\n";
            cin>>c;
        }
};
class D:public A,public B,public C{
    int d;
public:
    void display()
    {
        d=a*b*c;
        cout<<"Product of a,b and c is: "<<d<<endl;
    }
};

int main(){
    D product;
    product.get_a();
    product.get_b();
    product.get_c();
    product.display();
 
 
    return 0;
}