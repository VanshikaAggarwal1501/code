#include <iostream>
using namespace std;
class base {
public:
    virtual void print() {
        cout << "print base class\n"; 
    }

    void show() { 
        cout << "show base class\n"; 
    }
};
class derived : public base {
public:
    void print() { 
        cout << "print derived class\n";
    }

    void show() { 
        cout << "show derived class\n"; 
    }
};
int main()
{
    cout<< "Vanshika Aggarwal"<< endl;
    cout<< "Roll Number: 22001003138" << endl;
    base* bptr;
    derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}
