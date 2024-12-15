// constructor is used to initialise any value to the object
#include<iostream>
using namespace std;
class Animal{
    public:
    //states/properties
    int age;
    int weight;
    // behaviour
    void eat(){
        cout<< "eating"<< endl;
    }
    void sleep(){
        cout<< "sleeping"<< endl;
    }
    // basic constructor
    Animal(){
        // initialising values to the object's different parameters
        this->age= 12;
        this->weight=56;
        cout<< "constructor called"<< endl;
    }
    //parameterised constructor
    Animal(int age, int weight){
        this->age= age;
        this->weight= weight;
        cout<< "parameterised constructor called"<< endl;
    }
};
int main(){
    cout<< "Vanshika Aggarwal"<< endl;
    cout<< "Roll Number: 22001003138" << endl;
    Animal b;
    Animal* a= new Animal(12,56);
 
}