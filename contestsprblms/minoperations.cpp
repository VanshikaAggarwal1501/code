#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>nums= {1,0,3,5,5};
        int count=0;
        sort(nums.begin(), nums.end());
        int i=0;
        while(i<nums.size()){
            if(nums[i]== 0){
                i++;
                cout<< "if ex. "<< i<< endl;
            }
            else {
                cout<< "i: "<< i<< endl;
                int j=i;
                while(i< nums.size()){
                    nums[i]= nums[i]- nums[j];
                    i++;
                }
                i=j+1;
                count++;
                cout<< "count " << count<< endl;
                for(int i=0; i< nums.size(); i++){
                    cout<< nums[i]<< " ";
                }
                cout<< endl;
            }
        }
        cout<< count << endl;  
}
