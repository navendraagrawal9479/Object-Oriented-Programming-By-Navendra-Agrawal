#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class student{
    int roll;//4byte
    string name;//2byte
public:
    void getdata(int x,string y){
        roll=x;
        name=y;
    }
    void putdata(){
        cout<<"Name: "<<name<<" roll number: "<<roll<<endl;
    }
};

int main(){
    // student s;//6bytes
    // int *ptr=new int;
    // int *ptr;
    // ptr=new int;
    // student *s=new student;
    // (*s).getdata();
    // (*s).putdata();
    // s->getdata(1,"name1");
    // s->putdata();
    // student s[10];//60bytes
    student *s[10];
    for(int i=0;i<10;i++){
        cout<<"Enter 1 to continue or 0 to exit.";
        int flag;
        cin>>flag;
        if(flag==0){
            break;
        }
        else{
            s[i] = new student;
            int roll;
            string name;
            cout<<"Enter name and roll number: ";
            cin>>name>>roll;
            s[i]->getdata(roll,name);
            s[i]->putdata();
        }
    }

    return 0;
}