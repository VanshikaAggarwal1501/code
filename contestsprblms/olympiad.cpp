#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    int one=0;
    int two=0;
    int three=0;
    for(int i=0; i<n; i++){
        if(arr[i]== 1){
            one++;
        }
        else if(arr[i]== 2){
            two++;
        }
        else {
            three++;
        }
    }
    int mini= min(one, min(two,three));
    cout<< mini<< endl;
    int i=0;
    int j=0;
    int k=0;
    while(mini--){
    while(arr[i]!=1){
        i++;
    }
    while(arr[j]!=2){
        j++;
    }
    while(arr[k]!=3){
        k++;
    }
    cout<<i+1<< " "<< j+1<< " "<< k+1<< endl; 
    i++;
    j++;
    k++;

    }
}
