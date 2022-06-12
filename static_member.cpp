#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class item{
private:
    static int count;
    int a;
public:
    void setcount(){
        count++;
    }
    static void getcount(){
        cout<<"count: "<<count<<endl;
    }
};

int item::count;

int main(){
    item i,j,k;
    i.setcount();
    j.setcount();
    item::getcount();
 
    return 0;
}