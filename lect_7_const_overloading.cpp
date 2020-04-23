#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    private:
    string name;
    
    public:

    HumanBeing(){
        cout<<"No name"<<endl;
    }

    HumanBeing(string val){
        name = val;
        cout<<val;
    }
};

int main(){
    
    HumanBeing h1;
    HumanBeing h2("satya");
    return 0;
}