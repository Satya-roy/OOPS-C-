#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
    string name;
    
    public:
    void setName(string iname){
        name = iname;
    }
};

class student: public Person{
    public:
    void display(){
        cout<<name;
    }
};

int main(){

    student satya;
    satya.setName("satya shree samantroy");
    satya.display();
    return 0;
}