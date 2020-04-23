#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
    HumanBeing(){
        cout<<"Constructor is called"<<endl;
    }
    ~HumanBeing(){
        cout<<"Destructor is called";
    }

};

int main(){
    HumanBeing h1;

    HumanBeing *h2 = new HumanBeing();
    delete h2;

    return 0;
}