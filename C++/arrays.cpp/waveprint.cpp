#include<iostream>
using namespace std;
void printingwave(int arr[3][4]){
    int j=0;
    for(int i=0; i< 4; i++){
        if(i&1){
            j=2;
            while(j>=0){
                cout<< arr[j][i]<< " ";
                j--;
            }
        }
        else {
            j=0;
            while(j< 3){
                cout<< arr[j][i]<< " ";
                j++;
            }
        }
    }
}
int main(){
    int arr[3][4]= {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    printingwave(arr);

}
