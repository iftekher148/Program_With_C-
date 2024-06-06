#include <iostream>
using namespace std;

class MyClass{  // The class
public:         // Access specifier
    int addNum(int a, int b); // Method/function declaration
};
// Method/function definition outside the class
MyClass::addNum(int a, int b){
   int c=a+b;
}

int main(){
 MyClass obj;
 cout<< obj.addNum(4,5); // Call the method

}
