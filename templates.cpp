#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
template<class T1,class T2>
class test{
    private:
        T1 a;
        T2 b;
    public:
        test(T1 a,T2 b){
            this->a=a;
            this->b=b;
        }
        void putdata(){
            cout<<"a: "<<a<<" b: "<<b<<endl;
        }
};

int main(){
    test<int,int>t(2,4);
    t.putdata();
 
    return 0;
}