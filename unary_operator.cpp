#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007

class test{
    int a;
    int b;
public:
    test(){}
    test(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a: "<<a<<" b: "<<b<<endl;
    }
    void operator-();
};

void test::operator-(){
    a=-a;
    b=-b;
}
  
int main(){
    test t(-3,4);
    t.display();
    t.operator-();
    t.display();
 
    return 0;
}