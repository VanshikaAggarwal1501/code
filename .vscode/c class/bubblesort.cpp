// bubble sort
#include<iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    int i,j;
    int temp;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j< n-i-1; j++) {
            if( arr[j] > arr[j+1]) {
                temp= arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printarray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<  arr[i] << " ";
    }
    cout<< endl;
}

int main() {  
    cout<< "Name: Vanshika Aggarwal"<< endl;
    cout<< "Roll No. 22001003138"<< endl;
    int arr[]= {64, 34, 67, 12, 11};
    int n= sizeof(arr) / sizeof(arr[0]);
    cout<< "Array before sorting"<< endl;
    printarray(arr,n);
    bubblesort(arr,n);
    cout<< "sorted array is\n";
    printarray(arr,n);
    return 0;
    
}