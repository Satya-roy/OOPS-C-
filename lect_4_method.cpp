#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
    string name;

    void introduce();
};
//defining outside the method need to use scope resolution
void HumanBeing::introduce(){
    cout<< HumanBeing::name<<endl;
}

int main(){
    HumanBeing h1;
    h1.name = "Satya Shree Samantroy";
    h1.introduce();
    return 0;
}