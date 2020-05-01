#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    virtual void introduce(){
        cout<<"Hello from person"<<endl;
    }
};

class student : public person{
    public:
    void introduce(){
        cout<<"Hello form student"<<endl;
    }
};

class farmer : public person{
    public:
    void introduce(){
        cout<<"Hello form farmer"<<endl;
    }
};

void whoIsThis(person &p){
    p.introduce();
}
int main(){
    farmer anil;
    whoIsThis(anil);
    student satya;
    whoIsThis(satya);
    return 0;
}