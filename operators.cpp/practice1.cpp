
/*int main() {
    int n;
    cout<< "enter any number"<< endl;
    cin>> n;
    int rem;
    while(n!=0) {
        rem= n%10;
        cout<< "digit "<< rem<< endl;
        n=n/10;

    }
    return 0;
}*/

/*int main() {
    int n;
    cout<< "enter any number"<< endl;
    cin>> n;
    int qnt;
    int i=100;
    while(n!=0) {
        qnt= n/i;
        cout<< qnt << endl;
        n=n%i;
        i=i/10;
    }
    return 0;
}*/

/*int main()  {
    int n, rem,rem2, rev=0;
    cout << "enter any number"<< endl;
    cin>> n;
    while(n!=0) {
        rem = n%2;
        cout<< rem;
        n=n/2;
    }
    cout<< endl;
    // printing the rverse
    while(rem!=0) {
        rem2= rem%10;
        rev= rev*10+ rem2;
        rem= rem/10;

    }
    cout<< rev<< endl;
    return 0;
   
}*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cout<< "enter any number"<< endl;
    cin>> n;
    int digit, i=0;
    int res=0;
    while(n!=0) {
        digit= n%2;
       // digit= n&1;
        res= (digit* pow(10,i)) + res;
       // n= n>>1;
        i++;
        n = n/2;
    }
    cout<< res<< endl;
    return 0;
}