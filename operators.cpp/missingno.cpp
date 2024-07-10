// given an array of size n from 0 to n numbers, find the missing number
#include<iostream>
#include<algorithm>
using namespace std;
int missing(int arr[], int size) {
    int ans=0;
    for(int i=0; i<size; i++) {
        ans = ans^arr[i];
    }
    for(int i=0; i<= size; i++) {
        ans = ans ^ i;
    }
    return ans;
}
int missing2(int arr[], int size) {
    int sum =0;
    for(int i=0; i< size; i++) {
        sum = sum + arr[i];
    }
    int sum2 = 0;
    for(int i=1; i<= size; i++) {
        sum2 =sum2 + i; 
    }
    int ans = sum2-sum;
}
int missing3(int arr[], int size) {
    sort(arr, arr + (size-1));
    for(int i=0; i<size; i++) {
        if(i != arr[i]) {
            return i;
        }
    }
    return size;
}
int main() {
    int arr[] = {1,2,0,3,4,6,7,8,9,10};
    int size =10;
    int a = missing(arr,size);
    cout<< a<< endl;
    int b = missing2(arr,size);
    cout<< b << endl;
    int c = missing3(arr,size);
    cout<< c << endl;
}