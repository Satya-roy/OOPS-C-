#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    static int human_count;

    Human(){
        cout<<++human_count<<endl;
    }
};

int Human::human_count = 0;

void display();

int main(){
    display();
    display();
    display();
    display();
    display();
    cout<<endl;
    Human h1,h2,h3;

    return 0;
}

void display(){
    static int counter=0;
    cout<<++counter<<endl;
}