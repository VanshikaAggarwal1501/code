#include<stdio.h>
void printarray(int arr[], int size) {
    printf("array is\n");
    for(int i=0; i<size; i++) {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("\n");
}
int binarysearch(int arr[],int i ,int j, int target) {
    
    if(i<=j) {
    int mid= (i+j)/2;
    if(arr[mid] == target) {
        return mid+1;
    }
    else if(arr[mid]> target) {
        return binarysearch(arr,i,j= mid-1, target);
    }
    else if(arr[mid] < target) {
        return binarysearch(arr, i=mid+1, j, target);

    }
    }
    return -1;
}
int main() {
    int arr[] = {1,3,5,7,9,11,34,67,89,90};
    int size = 10;
    int target;
    int i=0, j=size-1;
    printarray(arr,size);
    printf("enter the target element\n");
    scanf("%d", &target);
    int position = binarysearch(arr, i, j, target);
    printf("position of element is %d\n", position);
    if(position== -1) {
        printf("target element not found");
    }

}