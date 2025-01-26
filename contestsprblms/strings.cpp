#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    string str2;
    cin>> str1;
    cin>> str2;
    int n= str1.length();
    int i=0;
    int sum=0;
    while(i<n){
        if(int(str1[i])- int(str2[i])== 32 || int(str1[i])- int(str2[i])== 0){
            i++;
        }
        else if(int(str1[i])- int(str2[i])> 32 || int(str1[i])- int(str2[i])> 0){
            sum+=1;
            i++;
        }
        else {
            sum-=1;
            i++;
        }
    }
    if(sum>=1){
        cout<< 1<< endl;
    }
    else if(sum<0){
        cout<< -1<< endl;
    }
    else {
        cout<< 0<< endl;
    }

}