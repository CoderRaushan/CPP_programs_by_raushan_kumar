#include <iostream> 
using namespace std;  
class Vehicle 
{ 
public: 
	Vehicle() 
    { 
        cout << "This is a Vehicle\n"; 
    } 
}; 


class Fare 
{   
public: 
	Fare() 
    { 
        cout << "Fare of Vehicle\n"; 
    } 
}; 
class Car : public Vehicle 
{ 

}; 
class Bus : public Vehicle, public Fare 
{ 

}; 
int main() 
{ 
	Bus obj2; 
	return 0; 
}
