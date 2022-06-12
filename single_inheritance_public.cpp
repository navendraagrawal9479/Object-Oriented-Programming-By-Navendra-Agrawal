//Single Inheritance
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class B{
    int a;
public:
    int b;
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    int get_a(){
        return a;
    }
    void show_a(){
        cout<<"a: "<<a<<endl;
    }
};

class D:public B{
    int c;
public:
    void mul(){
        c=b*get_a();
    }
    void display(){
        cout<<"c: "<<c<<endl;
    }
};

int main(){
    D d;
    d.setdata(3,6);
    d.b=10;
    d.mul();
    d.display();
    d.show_a();

 
    return 0;
}