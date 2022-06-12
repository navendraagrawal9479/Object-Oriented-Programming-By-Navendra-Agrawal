#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class student{
    protected:
        int roll;
    public:
        student(int r){
            roll=r;
        }
        void putdata(){
            cout<<"Roll number: "<<roll<<endl;
        }
};
class result:public student{
    protected:
        int total;
    public:
        result(int t,int r):student(r){
            total=t;
        }
        void putresult(){
            putdata();
            cout<<"Total marks is: "<<total<<endl;
        }
};

int main(){
    result r(80,102);
    r.putresult();
 
    return 0;
}