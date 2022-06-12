#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class test{
    private:
        int *a;
    public:
        test(){}
        test(int size){
            a=new int[size];
        }
        ~test(){
            delete a;
            cout<<"destructor called.\n";
        }
};

int main(){
    test t(10);
 
    return 0;
}