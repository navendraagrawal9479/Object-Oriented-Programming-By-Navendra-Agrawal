#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
class operand{//abstract class
protected:
    int a,b;
public:
    void getab(){
        cout<<"Enter a and b: ";
        cin>>a>>b;
    }
};
class add:public operand{
    public:
        int addition(){
            return a+b;
        }
};
class mul:public operand{
    public:
        int multiply(){
            return a*b;
        }
};

int main(){
    add a;
    mul m;
    a.getab();
    cout<<"Additon: "<<a.addition()<<endl;
    m.getab();
    cout<<"Multiplication: "<<m.multiply()<<endl;
 
    return 0;
}