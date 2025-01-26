#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x=n;
        while(n--){
            int arr[m];
            for(int i=0; i<m; i++){
                cin>> arr[i];
            }
            sort(arr,arr+m);
            for(int i=0; i<m-1; i++){
                if(arr[i+1]- arr[i]<= 1){
                    cout<< -1<< endl;
                    break;

                }
            }
        }



    }

}