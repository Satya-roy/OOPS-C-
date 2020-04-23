#include<bits/stdc++.h>

using namespace std;

class HumanBeing{
    private:
    int age;
    string name;

    public:
    HumanBeing(){
        age = 0;
        name = "Satya Shree Samantroy";
    }

    void display(){
        cout<<name<<" "<<age;
    }
};

int main(){
    HumanBeing h1;
    h1.display();
}