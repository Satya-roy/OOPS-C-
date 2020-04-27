#include<bits/stdc++.h>
using namespace std;

class father{
    protected:
    int height;

    public:
    father(int h){
        height = h;
        cout<<"father constructor is called"<<endl;
    }
};

class student: father{
    public:
    student(int x):father(x){
        cout<<"child class is called"<<endl;
    }

    void display(){
        cout<<"height is "<< height;
    }

};

int main(){
    student satya(21);
    
    satya.display();
    return 0;
}