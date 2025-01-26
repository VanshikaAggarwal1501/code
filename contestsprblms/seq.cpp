#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int flag1=0;
        for(int i=0; i<n-1;){
            if(arr[i]>arr[i+1]){
                i++;
            }
            else {
                flag1=1;
                break;
            }
        }
        if(flag1==0){
            cout<< "no"<< endl;
        }
        else {
            for(int i=0; i<n-1; i++){
                int mini= min(arr[i], arr[i+1]);
                arr[i]-= mini;
                arr[i+1]-= mini;
            }
            int f=0;
            for(int i=0; i<n-1;){
                if(arr[i]<= arr[i+1]){
                    i++;
                }
                else {
                    cout<< "no"<< endl;
                    f=1;
                    break;
                }
            }
            if(f==0){
                cout<< "yes"<< endl;
            }

        }
    }
}