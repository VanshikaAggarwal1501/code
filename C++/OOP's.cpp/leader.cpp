#include<iostream>
using namespace std;
int main(){
    int numbers[10];
    int sum=0, max, min;
    cout<< "Enter numbers"<< endl;
    for(int i=0; i< 10; i++){
        cin>> numbers[i];
    }
    max= numbers[0];
    min= numbers[0];
    for(int i=0; i< 10; i++){
        sum+= numbers[i];
        if(numbers[i]> max){
            max= numbers[i];
        }
        if(numbers[i]< min){
            min= numbers[i];
        }
    }
    cout<< max<< endl;
    cout<< min<< endl;
}