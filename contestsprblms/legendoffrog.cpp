#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int x,y,k;
        cin>> x>> y>> k;
        int initial_x=0;
        int initial_y=0;
        int rem_x = x;
        int rem_y = y;
        int moves= 0;
        int dir= 1;
        while(rem_x !=0 || rem_y !=0){
            if(rem_x !=0 && dir==1){
                if(rem_x>=k){
                    initial_x+= k;
                    rem_x= rem_x - initial_x;
                    dir=0;
                }
                else {
                    initial_x+= rem_x;
                    rem_x= 0;
                    dir=0;
                }
                moves++;
            }
            if(rem_x ==0 && dir== 1){
                moves++;
                dir=0;
            }
            if(rem_y!=0 && dir==0){
                if(rem_y>=k){
                    initial_y+= k;
                    rem_y= rem_y -initial_y;
                    dir=1;
                }
                else {
                    initial_y+= rem_y;
                    rem_y = 0;
                    dir=1;
                }
                moves++;
            }
            if(rem_y==0 && dir== 0){
                moves++;
                dir=1;
            }
        }
        cout<< moves<< endl;
    }
}