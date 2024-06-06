#include <iostream>
using namespace std;

class CountryName{ // The class
public:   // Access specifier
    CountryName(){   // Constructor
        cout<< "Bangladesh";
    }
};

int main(){
    CountryName obj; // Create an object of CountryName (this will call the constructor)
}
