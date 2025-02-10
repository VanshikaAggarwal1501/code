#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    float actual= 0.00;
    for(int i=0; i<n; i++){
        actual+= arr[i]/100.00;
    }
    cout<< (actual/n)*100.00 << endl;

}