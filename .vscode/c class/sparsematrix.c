#include<stdio.h>
int main() {
    int row, col, arr[10][10];
    printf("enter the number of rows and columns\n");
    scanf("%d%d", &row,&col);
    printf("enter the elements\n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", arr[i][j]);
        }
    }
    for(int i=0; i<row; i++) {
        for(int j=0; j< col; j++) {
            printf("\t%d", arr[i][j]);
        }
        printf("\n");
    }
    int count =0;
    for(int i=0; i< row; i++) {
        for(int j=0; j< col; j++) {
            if(arr[i][j] == 0) {
                count++;
            }
        }
    }
    
}