#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class timee{
    int hours;
    int minutes;
public:
    void gettime(){
        cout<<"Enter hours: "<<endl;
        cin>>hours;
        cout<<"Enter minutes: "<<endl;
        cin>>minutes;
    }
    void puttime(){
        cout<<"It is "<<hours<<"hours and "<<minutes<<"minutes.\n";
    }
    void sum(timee,timee);
};
//4:50
//1:15
//6:05  

void timee::sum(timee t1,timee t2){
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60+t1.hours+t2.hours;
    minutes=minutes%60;
}

int main(){
    timee t1,t2,t3;
    t1.gettime();
    t1.puttime();
    t2.gettime();
    t2.puttime();
    t3.sum(t1,t2);
    t3.puttime();

 
    return 0;
}