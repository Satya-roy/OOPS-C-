#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    private:
    int age;
    int getAge(){
        return age-5;
    }

    public:
    void displayAge(int val){
        age = val;
        cout<<getAge()<<endl;
    }

};

int main(){
    HumanBeing h1;
    h1.displayAge(21);
    return 0;
}