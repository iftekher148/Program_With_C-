#include <iostream>
#include <string>
using namespace std;

class MyClass{
    public:
        //using argument passing system
        int swapnumber(int a,int b){
        a=a+b;
        b=a-b;
        a=a-b;
        cout<< a << " " << b<< endl;

    }
};

int main(){
 MyClass obj;
 obj.swapnumber(5,9);
 return 0;
}
