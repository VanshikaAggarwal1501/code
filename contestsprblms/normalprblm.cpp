#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    cout<< "executing"<< endl;
    int t;
    cin>> t;
    while(t--){
        string str;
        cin>> str;
        int n= str.length()-1;
        vector<char>vec;
        vec.reserve(str.length());
        for(int i= n; i>=0; i--){ 
            if(str[i]== 'p'){
                vec.push_back('q');
            }
            else if(str[i]== 'q'){
                vec.push_back('p');
            }
            else{
                vec.push_back('w');
            } 
        
        }
        string str2(vec.begin(), vec.end());
        cout<< str2<< endl;  
    }
}