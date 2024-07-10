#include<stdio.h>
void insertion(int arr[] , int n) {
    int key;
    for(int i=1; i<n; i++) {
        key = arr[i];


        
    }
}
void printarray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("\t%d", arr[i]);
    }
}
int main() {
    int arr[] = {12, 78, 56, 34, 11};
    int n = sizeof(arr)/ sizeof(arr[0]);
    insertion(arr,n);
    printarray(arr, n);
    return 0;

}