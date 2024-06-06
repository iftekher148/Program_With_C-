#include <iostream>
using namespace std;

class Employee{
private:
    int salary; // Private attribute

public:
     // Setter
    void setSalary(int s){
        salary=s;
    }
      // Getter
    int getSalary(){
        return salary;
    }
};
int main(){
    Employee emp;
    emp.setSalary(5000);
    cout<<emp.getSalary();
}
