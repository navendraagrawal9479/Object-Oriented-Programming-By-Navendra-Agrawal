#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007

class item{
private:
    int a;
    int b;
    int arr[10];
public:
    // void getdata(int x,int y);
    // void putdata(){
    //     cout<<"a: "<<a<<" b: "<<b<<endl;
    // };
    void getdata();
    void putdata();
};

// void item::getdata(int x,int y){
//     a=x;
//     b=y;
// }
void item::getdata(){
    cout<<"Enter the values: \n";
    for(int i=0;i<10;i++)cin>>arr[i];
}

void item::putdata(){
    for(int i=0;i<10;i++)cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    item i,j;
    i.getdata();
    i.putdata();

    return 0;
}