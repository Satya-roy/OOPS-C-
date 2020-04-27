#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    int age;

    public:
    void setAge(int age){
        this->age = age;
    }
    void display(){
        cout<<"My age is "<< age;
    }
};

int main(){
    student satya;
    satya.setAge(21);
    satya.display();

    return 0;
}