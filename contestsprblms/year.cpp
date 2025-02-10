#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int y;
    cin>> y;
    int a = y;
    while(1){
        a++;
        y++;
        unordered_map<int,int>mp;
    while(a!=0){
        int rem= a%10;
        mp[rem]++;
        a=a/10;
    }
    int flag=0;
    for(auto it: mp){
        if(it.second>1){
            flag=1;
            break;
        }
    }
    if(flag==0){
        break;
    }

    }
    cout<< y<< endl;
}