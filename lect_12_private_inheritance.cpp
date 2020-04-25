#include<bits/stdc++.h>
using namespace std;

class person{
    protected:
    string name = "no-name";

    public:
    void setName(string iname){
        name = iname;
    };
};

class student : private person{
    // person attributes are private in student class
    public:
    int id;
    void setId(int iid){
        id = iid;
    }
    void display(){
        cout<<name<<endl<<id<<endl;
    }
};
int main(){
    student satya;
    //cannot access set name outside class as it is private
    //satya.setName("Satya Shree Samantroy");
    satya.setId(12345);
    satya.display();
    return 0;
}