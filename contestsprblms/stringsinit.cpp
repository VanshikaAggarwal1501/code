#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int arr[26];
	    for(int i=0; i<26; i++){
	        cin>> arr[i];
	    }
	    string str;
	    cin>> str;
	    unordered_map<char,int>mp;
	    for(int i=0; i< str.length(); i++){
	        mp[str[i]]++;
	    }
        for(auto it: mp){
            cout<< it.first<< ": "<< it.second<< endl;
        }
	    int sum=0;
	    for(auto it: mp){
	        if(it.second==0){
	            int val = int(it.first -'a');
	            sum+= arr[val-1];
	        }
	    }
	    cout<< sum<< endl;
	}

}
