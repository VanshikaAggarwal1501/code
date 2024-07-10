// simple calculator using switch case

/*int main() {
    int a,b;
    char ch;
    cout<< "enter two numbers"<< endl;
    cin>>a>>b;
    cout<< "enter the operation"<< endl;
    cin>> ch;
    switch(ch) {
        case '+' : cout<< a+b<< endl;
        break;
        case '-' : cout<< a-b<< endl;
        break;
        case '*' : cout<< a*b<< endl;
        break;
        case '/' : cout<< a/b<< endl;       
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main() {
int n;
/*cout<< "enter any number"<< endl;
cin>> n;
switch(n) {
    case 49 : cout<< "number is divisible by 7"<< endl;
   // case if(n>0) : cout<< "number is negative"<< endl;
    default : cout<< "number is 0"<< endl;
}*/
/*cout<< "enter the marks "<< endl;
cin>> n;
switch(n/10) {
    case 9 : cout << "grade A"<< endl;
    break;
     case 8 : cout << "grade B"<< endl;
    
     case 7 : cout << "grade C"<< endl;
    
    case 6 : cout << "grade D"<< endl;
    break;
    case 5 : cout << "FAIL"<< endl;
    break;
}*/
cout<< "enter the amount"<< endl;
cin>> n;
    cout<< "number of 100 rupee notes are"<< n/100<< endl;
    n= n - (n/100)*100;
    cout<< "number of 50 rupee notes are"<< n/50 << endl;
    n= n- (n/50)*50;
    cout<< "number of 10 rupee notes are"<< n/10 << endl;
    n= n- (n/10)*10;
    cout<< "number of 1 rupee notes are"<< n/1 << endl;
    n= n- (n/1)*1;
return 0;
}


    