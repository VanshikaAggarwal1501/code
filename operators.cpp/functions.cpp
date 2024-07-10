#include<iostream>
using namespace std;
void printname(int num) {
    ++num;
    num++;
    cout<< num<< endl;
}
int sum(int a, int b) {
    return a+b;
}
/*int main() {
    int a,b;
    cout<< "enter two numbers"<< endl;
    cin>> a>>b;
    int p= sum(a,b);
    cout<< "sum of numbers is "<< sum(a,b)<< endl;

    //cout<< "enter any number"<< endl;
    //cin >> num;
    
    
   // ++num;
    //cout<< num << endl;
   // printname(num);
   // num--;
   // cout<< num;
    return 0;
}*/
int fact(int n) {
    if(n<=1) {
        return 1;
    }
    else {
        return n* fact(n-1);
    }

}
void ncr(int n, int r) {
    
    cout<< "enter the value of n"<< endl;
    cin>> n;
    cout<< "enter the value of r"<< endl;
    cin>> r;
    int facn = fact(n);
    int facr = fact(r);
    int fac = fact(n-r);
    cout<< "value of ncr is" <<  facn/ (facr* fac)<< endl;

}
int printcount(int n) {
    
    if(n==1) {
        return 1;
    }
    else {
        return n, printcount(n-1);
    }
}
void prime(int n) {
    int isprime=1;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            isprime=0;
            cout<< "number is not prime"<< endl;
            break;
        }
    }
    if(isprime==1) {
        cout<< "number is prime"<< endl;
    }
}
int main() {
    //int n,r;
    //ncr(n,r);
    int n;
    cout<< "enter any number"<< endl;
    cin>> n;
    prime(n);
   // printcount(n);

    return 0;
    
}