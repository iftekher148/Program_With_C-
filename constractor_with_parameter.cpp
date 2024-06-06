#include <iostream>
using namespace std;

class Employee{ // The class
    public: // Access specifier
        string name; // Attribute
        string address;// Attribute
        int age;    // Attribute

    Employee(string x, string y, int z){ // Constructor with parameter
        name=x;
        address=y;
        age=z;
    }
};

int main(){
  Employee emp("Karim","Dhaka",35); // Create Car objects and call the constructor with different values
  cout << emp.name << " " << emp.address << " " << emp.age << endl;
}
