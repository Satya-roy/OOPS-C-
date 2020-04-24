#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    void setName(string nname,int aage){
        name = nname;
        age = aage;
    }
};

//Inheritance

class student : public Person{
    public:
    int id;
    void setId(int iid){
        id = iid;
    }
    void introduce(){
        cout<<name<<endl<<age<<endl<<id<<endl;
    }
};

int main(){
    student satya; 
    satya.setName("Satya Shree Samantroy",21);
    
    satya.setId(12345);

    satya.introduce();
    return 0;
}