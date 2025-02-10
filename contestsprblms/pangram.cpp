#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>> n;
    string str;
    cin>> str;
    for(int i=0; i<n; i++){
        str[i]= str[i] + 'a'- 'A';
    }
    unordered_map<char,int>mp;
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }
    if(mp.size()==26){
        cout << "YES"<< endl;
    }
    else {
        cout<< "NO"<< endl;
    }
}