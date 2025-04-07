#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[5][5];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>> arr[i][j];
            }
        }
        if(k==n){
            cout<< arr[0][0]<< endl;
        }
        else if(k==1){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<< arr[i][j];
                }
            }
        }
        else {
            int brr[3][3];
            for(int i=0; i<n; i=i+k){
                for(int j=0; j<n; j=j+k){
                    cout<< arr[i][j];
                }
                cout<< endl;
            }

        }
    }
}