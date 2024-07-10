#include<stdio.h>
void printarray(int arr[], int size) {
    printf("array is\n");
    for(int i=0; i<size; i++) {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
}
int binarysearch(int arr[], int size, int target) {
    int i=0;
    int j= size-1;
    
    while(i<=j) {
        int mid = (i+j)/2;
        if(arr[mid]==target) {
            return mid+1;
        }
        else if(arr[mid]< target) {
            i= mid+1;
        }
        else if(arr[mid]> target) {
            j= mid-1;
        }
    }
}
int main() {
    int arr[] = {1,3,5,7,9,11,34,67,89,90};
    int size = 10;
    int target;
    printarray(arr,size);
    printf("enter the target element\n");
    scanf("%d", &target);
    int position= binarysearch(arr,size, target);
    printf("position of target element is %d",position);
    return 0;
}