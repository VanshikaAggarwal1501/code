#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        vector<int>brr(n);
        brr[0]= arr[0];
        int count=1;
        int mode=0;
        for(int i=1; i<n; i++){
            if(arr[i+1]!= arr[i]){
                brr[i]= arr[i+1];
                mode= count;
                count=1;
            
            }
            else {
                brr[i]= arr[i];
                count++;
            }
        }
    }
}