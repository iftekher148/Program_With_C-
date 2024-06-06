#include <iostream>
using namespace std;

class Base1{ //// Base class
public:
    int addNum(){
        int a=2,b=3,c;
        c=a+b;
        cout<< "Addition of number:"<< c << endl;
    }
};
class Base2{ // Another base class
public:
    int subNum(){
        int a=5,b=3,c;
        c=a-b;
        cout<< "Subtraction  of number:"<< c << endl;
    }
};
class Driven: public Base1,public Base2{ // Derived class
public:
    void show(){
        cout<<"Base1 & Base2 will inheritance";
    }
};
int main(){
Driven obj;
obj.addNum();
obj.subNum();
obj.show();
}

