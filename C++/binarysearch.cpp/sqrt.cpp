// you are given a number, find the square root of the number
#include<iostream>
using namespace std;
int sqrt(int& n, int& s, int& e){
    int ans= -1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid > n){
            e= mid-1;
        }
        else {
            ans = mid;
            s= mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main() {
    int n;
    cout<< "enter any number"<< endl;
    cin>> n;
    int s=0, e= n;
    int ans= sqrt(n,s,e);
    cout<< ans<< endl;
   
}