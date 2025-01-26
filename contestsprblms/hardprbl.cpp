#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int m,a,b,c;
        cin>> m>> a>> b>> c;
        int row1=0;
        int row2=0;
        int rem=0;
        if(a>m){
            row1=m; 
        }
        else {
            row1= a;
            rem= rem+ m-a;
        }
        if(b>m){
            row2=m; 

        }
        else {
            row2= b;
            rem= rem+ m-b;
        }
        if(c> rem){
            cout<< rem+row1+row2<< endl;
        }
        else {
            cout<< c+row1+row2<< endl;
        }


    }
}