#include <iostream>
using namespace std;
const int MAX = 10; 
template <class Type>
class Stack{
    private:
    Type st[MAX]; 
    int top; 
    public:
    Stack() {
        top = -1;
    }
    void push(Type var) { 
        st[++top] = var;
    }
    Type pop() { 
        return st[top--]; 
    }
};

int main(){
cout<< "Vanshika Aggarwal"<< endl;
    cout<< "Roll Number: 22001003138" << endl;    
Stack<float> s1; 
s1.push(11.1F); 
s1.push(22.2F);
s1.push(33.3F);
cout << "1:" << s1.pop() << endl;
cout << "2:" << s1.pop() << endl;
cout << "3:" << s1.pop() << endl;
}