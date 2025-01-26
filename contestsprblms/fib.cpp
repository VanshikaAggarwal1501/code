#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int a,b,d,e;
    cin>> a>>b>>d>>e;
    int c= a+b;
    int cnt1=1;
    int cnt2=1;
    if(b+c==d){
        cnt1++;
    }
    if(c+d==e){
        cnt1++;
    }
    c= d-b;
    if(a+b==c){
        cnt2++;
    }
    if(c+d==e){
        cnt2++;
    }
    cout<< max(cnt1,cnt2)<< endl;

    }


}