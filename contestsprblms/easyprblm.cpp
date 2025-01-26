#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        int count=0;
        for(int i=1; i< n; i++){
            int j= n-i;
            if(j>0){
                count++;
            }
        }
        cout<< count<< endl;
    }

}