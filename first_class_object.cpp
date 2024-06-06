#include <iostream>
#include <string>
using namespace std;

class MyClass{ // The class
public:   // Access specifier
    int number;   // Attribute (int variable)
    string name; // Attribute (string variable)

};

int main(){
    MyClass obj;
        MyClass obj2; // Create an object of MyClass
    // Access attributes and set values
    obj.number=1;
    obj.name="rocktim";
   // MyClass obj2;
    obj2.number=2;
    obj2.name="Rahim";
      // Print values
    cout<<obj.number<<" "<<obj.name<<endl;
    cout<<obj2.number<<" "<<obj2.name<<endl;

    //int num= obj.number=1;
    //string myname=obj.name="rocktim";
    //cout<<num<<endl;
    //cout<<myname;
}
