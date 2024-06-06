#include <iostream>
#include <string>
using namespace std;

class MyClass{
public:
    //Version 1::using argument passing
    /*int addNum(int a,int b){
       int c= a+b;
        cout<<c;
}*/
    //Version 2: No Arguments, Using Internal Values
    int addNum(){
       int a=6;
       int b=7;
       int c=a+b;
    cout<<c;
    }
};

int main(){
    MyClass obj;
    obj.addNum();
}
