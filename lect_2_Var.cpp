#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
    string name;

    void introduce(){
        cout<<"Hello! My name is "<<name;
    }
};

int main(){
    HumanBeing Satya;
    Satya.name = "Satya Shree Samantroy";
    Satya.introduce();          
}