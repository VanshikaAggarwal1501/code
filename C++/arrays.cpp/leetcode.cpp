#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>>intervals ={{2,3},{2,2},{3,3},{1,3},{5,7},{2,2},{4,6}};
    sort(intervals.begin(), intervals.end());
    for(int i=0; i< intervals.size(); i++){
        for(int j=0; j< intervals[i].size(); j++){
            cout<< intervals[i][j]<< " ";
        }
        cout<< endl;    
    }
}