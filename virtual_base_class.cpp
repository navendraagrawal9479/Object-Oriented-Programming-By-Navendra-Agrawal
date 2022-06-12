#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
 
class student{
protected:
    int roll_number;
public:
    void get_roll(){
        cout<<"Enter roll number: \n";
        cin>>roll_number;
    }
    void put_number(){
        cout<<"Roll number: "<<roll_number<<endl;
    }
};
class test:virtual public student{
protected:
    int sub1;
    int sub2;
public:
    void get_marks(int a,int b){
        sub1=a;
        sub2=b;
    }
    void put_marks(){
        cout<<"Marks in subject 1: "<<sub1<<endl;
        cout<<"Marks in subject 2: "<<sub2<<endl;
    }
};
class sport:virtual public student{
protected:
    int score;
public:
    void getscore(){
        cout<<"Enter score: ";
        cin>>score;
    }
    void putscore(){
        cout<<"Sports score: "<<score<<endl;
    }
};
class result:public test,public sport{
    int total;
public:
    void display(){
        total=sub1+sub2+score;
        put_number();
        putscore();
        put_marks();
        cout<<"The final result is: "<<total<<endl;
    }
};

int main(){
    result r;
    r.get_roll();
    r.get_marks(80,75);
    r.getscore();
    r.display();
 
    return 0;
}