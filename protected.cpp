#include <iostream>
using namespace std;
class Vehicle{
public:
string brand="Ford";
void color(){
cout<<"Red!\n";
}
};

class Car:protected Vehicle{
public:
string model="Mustang";

};

int main(){
Car myCar;
myCar.color();
cout<<myCar.brand+""+myCar.model;
return 0;
}


