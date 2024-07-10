#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cout<< "enter any number"<< endl;
    cin>> n;
    int  i=0; 
    int res=0;
    while(n > 0) {
       int digit= n & 1;
        res = (digit * pow( 10, i)) + res ;
        i++;
        n = n>>1;
        
    }
    cout<< res << endl;
    return 0;
    // binary to decimal
    /*int n, i=0;
    int sum=0;
    cout<< "enter the binary"<< endl;
    cin>> n;
    while(n!=0) {
        int digit = n % 10 ;
        if(digit == 1) {
            sum = sum + (pow(2,i)) ;
        }
        i++;
       n = n/10;
    } 
    cout<< "decimal is "<< sum << endl;
    return 0;*/

}