#include<stdio.h>
void selection(int arr[], int n) {
    int minindex;
    int temp;
    for(int i=0; i<n-1; i++) {
        minindex = i;
        for(int j= i+1; j<n; j++) {
            if(arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
    if(minindex != i) { 
        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
    }
}
void printarray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("\t%d", arr[i]);
    }
}

int main() {
    int arr[] = {12, 67, 45, 23, 11};
    int n= sizeof(arr)/ sizeof(arr[0]);
    selection(arr, n);
    printarray(arr, n);
    return 0;
}