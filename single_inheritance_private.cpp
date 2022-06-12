//Single Inheritance
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class B{
    int a;
public:
    int b;
    void setdata(){
        cout<<"Enter a and b: \n";
        cin>>a>>b;
    }
    int get_a(){
        return a;
    }
    void show_a(){
        cout<<"a: "<<a<<endl;
    }
};

class D:private B{
    int c;
public:
    void mul(){
        setdata();
        c=b*get_a();
    }
    void display(){
        cout<<"c: "<<c<<endl;
    }
};

int main(){
    D d;
    d.mul();
    d.display();

 
    return 0;
}