#include<iostream>
using namespace std;
int main(){
    long long k,r;
    cin>> k>> r;
    long long count=1;
    while(1){
        if((k*count)%10==0){
            cout<< count<< endl;
            break;
        }
        else if((k*count)%10== r){
            cout<< count<< endl;
            break;
        }
        else {
            count++;
        }
    }
}