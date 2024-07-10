#include<stdio.h>
void linearsearch(int *arr, int size, int target){
    int flag= 0;
    for(int i=0; i< size; i++){
        if(arr[i]== target){
            printf("%d\n, target found at index", i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("target not found");
    }
}
int main(){
    int arr[]= {10,20,30,40,50,60};
    int size= 6;
    int target;
    printf("enter target");
    scanf("%d", &target);
    linearsearch(arr,size,target);
}