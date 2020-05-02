#include<bits/stdc++.h>
using namespace std;

class Marks{
    private:
    int internal;
    int external;
    public:
    Marks(int i = 0,int e = 0){
        internal = i;
        external = e;
    }
    void display(){
        cout<<internal<<" "<<external<<endl;
    }

    Marks operator +(Marks m){
        Marks temp;
        temp.internal = internal + m.internal;
        temp.external = external + m.external;
        return temp;
    }
};

int main(){
    Marks m1(2,3) , m2(3,4) , m3;
    m3 = m1+m2;
    m3.display();
    return 0;
}