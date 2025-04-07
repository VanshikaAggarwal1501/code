#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
    int data[32];
    for(int i=0;i<32;i++)
    {
        cin>>data[i];
    }
    int add[4]={};
    for(int i=0;i<32;i++)
    {
        add[i/8]+=(data[i]*pow(2,7-i%8));
    }
    for(int i=0;i<3;i++)
    {
        cout<<add[i]<<".";
    }
    cout<< add[3];
}