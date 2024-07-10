// maximum of three numbers
#include<iostream>
using namespace std;
void max(int a, int b, int c) {
    if(a>b && a>c) {
        cout<< "greatest is"<< a << endl;
    }
    else if (b>c && b>a) {
        cout<< "greatest is "<< b<< endl;
    }
    else if(c>a && c>b) {
        cout<< "greatest is "<< c << endl;
    }
    else {
        cout<< "all are equal"<< endl;
    }
}
// counting upto n
void printcount(int n) {
    for(int i=1; i<=n; i++) {
        cout<< i<< endl;
    }
}
// grade of students
void grade(int n) {
    if(n>90 && n<100) {
        cout<< "A"<< endl;
    }
    else if(n>80) {
        cout<< "B"<< endl;
    }
    else if(n>70) {
        cout<< "C";
    }
    else if(n>60) {
        cout<< "D"<< endl;
    }
    else {
        cout<< "E" << endl;
    }
}
// grade using switch case
char printgrade(int n) {
    switch(n/10) {
        case 9 : return 'A';
        break;
        case 8 : return 'B';
        
        case 7 : return 'C';
        
        case 6 : return 'D';
        break;
        default : return 'E';

    }
}
// sum upto n even numbers
int sum(int n) {
    int add=0;
    for(int i=1; i<=n; i++) {
        if(i%2==0) {
            add= add+i;
        }
    }
    return add;

}

int main() {
    int n;
    cout<< "enter marks"<< endl;
    cin>> n;
    //int p= sum(n);
   // cout<< "required sum is "<<p << endl;
    char ch = printgrade(n);
    cout<< ch<< endl;
   // grade(n);
   // printcount(n);
   // printcount(n);
    
    //cout<< "enter three numbers"<< endl;
   // cin>> a>> b>> c;
    //max(a,b,c);
    return 0;

}