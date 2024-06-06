#include <iostream>
using namespace std;

class Father{ //Base class
public:
    string name= "Local";
    string address= "Dhaka";
};
class Child:public Father{ //Driven class
public:
    int age=90;
};

int main(){
    Child ft; //Driven class obj
    cout<< ft.name<<" "<<ft.age<<" "<<ft.address <<endl;
}
