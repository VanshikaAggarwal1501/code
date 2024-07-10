#include<stdio.h>
int binarysearch(int *arr, int size, int s, int e, int target){
    int mid= s+(e-s)/2;
    while(s<=e){
        if(arr[mid]== target){
            return mid;
        }
        else if(arr[mid]> target){
            e= mid-1;
        }
        else {
            s= mid+1;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[]= {10,20,30,40,50};
    int size= 5;
    int target;
    int s=0, e= size-1;
    printf( "enter target element to search");
    scanf("%d", &target);
    int ans = binarysearch(arr,size,s,e,target);
    if(ans<0){
        printf("target not found");
    }
    else {
        printf("target found at index %d\n ", ans);
    }
}