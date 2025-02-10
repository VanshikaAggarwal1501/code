// convert both strings to lower case and then compare them 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    string str2;
    cin>> str1;
    cin>> str2;
    int n= str1.length();
    for(int i=0; i<n; i++){
        if(str1[i]>= 'A' && str1[i]<= 'Z'){
            str1[i]+= 'a'-'A';
        }
        if(str2[i]>= 'A' && str2[i]<= 'Z'){
            str2[i]+= 'a'-'A';
        }
    }
    int i=0;
    while(i<n){
        if(str1[i]== str2[i]){
            i++;
        }
        else if(str1[i]> str2[i]){
            cout<< 1<< endl;
            break;
        }
        else {
            cout<< -1<< endl;
            break;
        }
    }
    if(i==n){
        cout<< 0<< endl;
    }


    

}