#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class item{
private:
    int a,b;
public:
    item();//default constructor
    item(int x,int y);//parameterized constructor
    item(int x);//parameterized constructor
    item(item &i);//copy constructor
    void putdata(){
        cout<<a<<" "<<b<<endl;
    }
};
item::item(int x,int y){
    a=x;
    b=y;
}
item::item(){
    a=0;
    b=0;
}
item::item(int x){
    a=x;
    b=x;
}
item::item(item &i){
    a=i.a;
    b=i.b;
}

int main(){
    // item i1(2,3);
    item i1;
    item i2(3,4);
    item i3(i2);
    i1.putdata();
    i2.putdata();
    i3.putdata();
    return 0;
}