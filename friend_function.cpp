#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class test{
    int a;
    int b;
public:
    void setdata(){
        cout<<"Enter values "<<endl;
        cin>>a>>b;
    }
    void putdata(){
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
    friend test sum(test);
};

test sum(test t){
    test t2;
    t2.a=t.a+t.b;
    t2.b=t.a-t.b;
    return t2;
}

int main(){
    test t,t2;
    t.setdata();
    t2=sum(t);
    t.putdata();
    t2.putdata();
 
    return 0;
}