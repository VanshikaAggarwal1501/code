#include <iostream> 
using namespace std; 

class A { 
public: 
    int a; 
    A() // constructor 
    { 
        a = 10; 
    } 
}; 

class B : public virtual A { 
}; 

class C : public virtual A { 
}; 

class D : public B, public C { 
}; 

int main() 
{ 
    cout<< "Vanshika Aggarwal"<< endl;
    cout<< "Roll Number: 22001003138" << endl;
    D object; // object creation of class d 
    cout << "a = " << object.a << endl; 

    return 0; 
}