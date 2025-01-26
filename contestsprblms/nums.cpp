#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        sort(arr,arr+n);
        int score=0;
        int i=0;
        int j=n-1;
        while(i<j){
            if(arr[i]+ arr[j]==k){
                score++;
                i++;
                j--;
            }
            else if(arr[i]+ arr[j]>k){
                j--;
            }
            else {
                i++;
            }

        }
        cout<< score<< endl;
    }
}