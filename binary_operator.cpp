#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class comple{
    float real;
    float imag;
public:
    comple(){}
    comple(float a,float b){
        real=a;
        imag=b;
    }
    void display(){
        cout<<real<<" + i"<<imag<<endl;
    }
    comple operator+(comple c);
};

comple comple::operator+(comple c){
    comple temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
}

int main(){
    comple c1(2.3,1.7),c2(1.8,2.6),c3;
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    // c3= c1.operator+(c2);
 
    return 0;
}