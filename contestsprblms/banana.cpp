#include<iostream>
using namespace std;
int main(){
    long long k,n,w;
    cin>> k>>n>>w;
    long long val= 0;
    if(w&1){
        val= w* ((w+1)/2);
    }
    else {
        val= (w/2)* (w+1);

    }
    long long ans= k*val;
    long long diff= ans-n;
    if(diff<0){
        cout<< 0<< endl;
    }
    else {
        cout<< diff<< endl;
    }
   

}