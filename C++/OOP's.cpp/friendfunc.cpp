#include<iostream> 
using namespace std; 
    class base{
       int p; //private variable protected:
       int pro; 
    public:
       base(){
        p=90; 
        pro=98;
       }
    friend void Friend_func(base& obj);
};
void Friend_func(base& obj){
    cout<<"The value of private variable ="<<obj.p<<endl; 
    cout<<"The value of protected variable ="<<obj.pro<<endl;
}

int main(){
    cout<< "Vanshika Aggarwal"<< endl;
    cout<< "Roll Number: 22001003138" << endl;
    base obj1; Friend_func(obj1); return 0;
} 
