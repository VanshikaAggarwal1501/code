#include<iostream>
using namespace std;
void printspirally(int arr[4][4]){
    int start_row= 0;
    int end_row= 3;
    int start_col= 0;
    int end_col= 3;
    int size= 16;
    int count=0;
    while(count<= size){
        int j=0;
        while(j<= start_col){
            cout<< arr[start_row][j]<< " ";
            count++;
        }
        while()
    }

}
int main(){
    int arr[4][4]= {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
}