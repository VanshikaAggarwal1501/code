#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,s,m;
        cin>> n>> s>> m;
        cout<< endl;
        vector<int>ans;
        for(int i=0; i<2*n; i=i+2){
            cout<< "enter values: "<< endl;
            cin>> ans[i] >> ans[i+1]; 
            i= i+ 2;
        }
        for(int i=0; i<ans.size(); i++){
            cout<< ans[i]<< " ";

        }

        
    }
}