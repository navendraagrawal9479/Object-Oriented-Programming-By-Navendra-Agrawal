#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
int main(){
    // int a=10;
    // int *ptr=&a;
    // cout<<*ptr;
    // int a[10]={1,2,3,4,5,6,7,8,9,0};
    // //int=4bytes
    // // int *ptr=&a[0];
    // int *ptr;
    // ptr=a;
    // for(int i=0;i<10;i++){
    //     *ptr=*ptr+1;
    //     ptr++;
    // }
    // for(int i=0;i<10;i++){
    //     cout<<a[i]<<" ";
    // }
    int *ptr=new int[10];
    for(int i=0;i<10;i++){
        ptr[i]=i;
    }
    for(int i=0;i<10;i++){
        cout<<ptr[i]<<" ";
    }
    delete ptr;

    return 0;
}