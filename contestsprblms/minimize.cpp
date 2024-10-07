#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mini= INT_MAX;
        int c=0;
        if(a==b){
            cout<< 0<< endl;
        }
        else {
            for(int i=a; i<=b; i++){
                if((i-a) + (b-i) < mini){
                    mini= (i-a)+ (b-i);
                    c=i;
                }
            }
        }
        cout<<c<< endl;
    }
}