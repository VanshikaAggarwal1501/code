// implement first come first serve
#include<iostream>
using namespace std;
void printarray(int bt[], int &size){
    cout<< "{" << " ";
    for(int i=0; i<size; i++){
        cout<< bt[i]<< " ";
    }
    cout<< "}";
    cout<< endl;
}
void finalprocesses(int bt[], int& size, int processes[]){
    int wt[size];
    wt[0]=0;
    int sum=0;
    for(int i=1; i<size; i++){
        wt[i]= bt[i-1]+ wt[i-1];
        sum= sum+ wt[i];
    }
    cout<< "waiting time is ";
    printarray(wt,size);
    cout<< "average waiting time "<< sum/size << endl;
    int ct[size];
    for(int i=0; i<size; i++){
        ct[i]= wt[i]+ bt[i];
    }
    cout<< "completion time is ";
    printarray(ct,size);
    int tat[size];
    int sum2= 0;
    for(int i=0; i< size; i++){
        tat[i]= ct[i];
        sum2= sum2+ tat[i];
    } 
    cout<< "turn around time is ";
    printarray(tat,size);
    cout<< "Normalised TAT is "<< sum2/size << endl;
}

int main() {
    cout<< "Name: Vanshika Aggarwal"<< endl;
    cout<< "Roll No. 22001003138"<< endl;
    int processes[]= {1,2,3,4};
    int size= 4;
    int bt[size];
    for(int i=0; i<size; i++){
        cout<< "enter bt for process "<< i<< endl;
        cin >> bt[i];
    }
    printarray(bt,size);
    finalprocesses(bt,size,processes);
}
