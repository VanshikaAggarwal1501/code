
#include<iostream>
using namespace std;
// area of circle
float area(float r) {
    return 3.14*r*r;

}
int evenodd(int n) {
    cout<< "enter any number"<< endl;
    cin>>n;
    if(n%2==0) {
        
    }
}

bool iseven(int n) {
    if(n%2==0) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int n;
    cout<< "enter any number"<< endl;
    cin>> n;
    if( iseven(n)==1) {
        cout<< "number is even"<< endl;
    }
    else {
        cout<< "number is odd"<< endl;
    }

    //float p= area(r);
    //cout<< "area is "<< p<< endl;
    return 0;
}
