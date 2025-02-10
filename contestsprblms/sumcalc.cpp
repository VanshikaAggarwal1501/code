#include<iostream>
using namespace std;
int main(){
    string str;
    cin>> str;
    int n= str.length();
    int one=0;
    int two=0;
    int three=0;
    for(int i=0; i<n; i=i+2){
        if(str[i]== '1'){
            one++;
        }
        else if(str[i]== '2'){
            two++;
        }
        else if(str[i]== '3'){
            three++;
        }
    }
    for(int i=0; i<n; i=i+2){
        if(one!=0){
            str[i]= '1';
            one--;
        }
        else if(two!=0){
            str[i]='2';
            two--;
        }
        else if(three!=0){
            str[i]='3';
            three--;
        }

    }
    cout<< str<< endl;


}