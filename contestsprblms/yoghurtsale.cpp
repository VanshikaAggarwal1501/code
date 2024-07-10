#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        // considering all a
        int p1= n*a;
        int p2=0;
        int p3=0;
        if(n&1){ 
            // all odd
            if(n==1){
                return a;
            }
            else {
                p3= ((n-1)*b)/2 +a;
                return min(p1,p3);
            }
        }
        else {
            // considering all b
            p2= (n*b)/2;
            return min(p1,p2);
        }
    }
}