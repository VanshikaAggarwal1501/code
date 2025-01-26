#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>> arr[i][j];
        }
    }
    int locx=0;
    int locy=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i][j]==1){
                locx= i;
                locy=j;
                break;
            }
        }
    }
    int moves= abs(3-locx)+ abs(3-locy);
    cout<< moves<< endl;





}