#include <iostream>
#include<math.h>
using namespace std;

int32_t main() {
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
    cout<<add[3]<<endl;
    if(add[0]<128)
    cout<<"Class A"<<endl;
    else  if(add[0]<192)
    cout<<"Class B"<<endl;
    else  if(add[0]<224)
    cout<<"Class C"<<endl;
    else  if(add[0]<240)
    cout<<"Class D"<<endl;
    else 
    cout<<"Class E"<<endl;
}
