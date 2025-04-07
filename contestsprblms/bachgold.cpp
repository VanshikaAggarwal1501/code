#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    if(n&1){
        int two= (n/2)-1;
        cout<< two+1<< endl;
        while(two--){
            cout<< 2<< " ";
        }
        cout<< 3<< endl;

    }
    else {
        int ans= n/2;
        cout<< ans<< endl;
        while(ans--){
            cout<< 2<< " ";
        }
    }
}