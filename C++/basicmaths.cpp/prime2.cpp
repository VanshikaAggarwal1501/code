// sieve of eratosthenes
#include<iostream>
#include<vector>
using namespace std;

int countprime(int n) {
    int count =0;
    vector<bool>prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i=2; i<=n; i++) {   // optimisation 2
        if(prime[i]) {
            count++;
            for(int j= i*i; j<=n; j= j+i) { // optimisation 1
                prime[j] = false;
            }
        }
    }
    return count;
}
int main() {
    int n;
    cout<< "enter any number"<< endl;
    cin>> n;
    int ans= countprime(n);
    cout<< "count of prime numbers is "<< ans<< endl;
    return 0;

}