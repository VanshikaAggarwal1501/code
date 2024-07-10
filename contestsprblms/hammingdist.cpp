#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    int minCount=INT_MAX;
	    for(int i=0; i<n-m+1; i++){
	        int count=0;
	        string sub=a.substr(i,m);
	        for(int j=0; j<m; j++){
	            if(b[j]!=sub[j]) count++;
	        }
	        minCount=min(minCount,count);
	    }
	    cout<<minCount<<endl;
	}
}