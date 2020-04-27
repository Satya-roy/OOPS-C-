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

class mother{
    protected:
    string skinColor;

    public:
    mother(string color){
        skinColor = color;
        cout<<"mother constructor is called"<<endl;
    }
};

class student: public father,public mother{
    public:
    student(int x,string skinColor):father(x),mother(skinColor){
        cout<<"child class is called"<<endl;
    }

    void display(){
        cout<<"height is "<< height<<" skin color is "<<skinColor;
    }

};

int main(){
    student satya(21,"fair");
    
    satya.display();
    return 0;
}