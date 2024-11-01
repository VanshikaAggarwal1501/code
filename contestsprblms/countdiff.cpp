#include<iostream>
#include<vector>
using namespace std;
int countKDifference(vector<int>& nums, int k) {
        int pairs =0;
        int n= nums.size()-1;
        for(int i=0; i< n-1; i++){
            for(int j= i+1; j<n; j++){
                if((abs(nums[i]- nums[j]))== k){
                    cout<< i<< " "<< j<< endl;
                    pairs++;
                }
            }
        }
        return pairs;
        
}  
int main(){
    vector<int>nums= {1,2,2,1};
    int k=1;
    cout<< "pairs are "<< countKDifference(nums,k)<< endl;
}