#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
    string name;

    void introduce(){
        cout<<"Hi "<<name<<endl;
    }
};

int main(){

    HumanBeing h1;
    h1.name = "Satya Shree Samantroy"; //local variable stored in stack

    HumanBeing* h2 = new HumanBeing(); //dynamically allocated memory stored in heap
    h2->name = "Anmol Sharma";

    h1.introduce();
   
    h2->introduce();

    return 0;
}