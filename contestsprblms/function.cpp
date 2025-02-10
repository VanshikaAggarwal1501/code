#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n&1){
        cout<< (n/2)-n<< endl;

    }
    else {
        cout<< n/2 << endl;
    }
} 