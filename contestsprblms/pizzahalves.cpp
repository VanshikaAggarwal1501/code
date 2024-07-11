#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int power = 0 ;
	    for(int j=1;j<x;j++){
	        power = pow(2,j);
	        if(x-power<0){
	            j--;
	            power = pow(2,j);
	            break;
	        }	  
	    }
	    int k = x-power;
	    cout<<(2*k)<<endl;
	}

}