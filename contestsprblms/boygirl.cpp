#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str;
    cin>> str;
    int n= str.length();
    unordered_map<char,int>mp;
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }
    if(mp.size() &1){
        cout<< "IGNORE HIM!"<< endl;
    }
    else {
        cout<< "CHAT WITH HER!"<< endl;
    }


}