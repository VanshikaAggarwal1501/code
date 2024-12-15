#include <iostream>
using namespace std;
class Distance {
    private:
       int feet;
       float inches;
    public:
        void getdist(){
           cout << "\nEnter feet: "; cin >> feet;
           cout << "Enter inches: "; cin >> inches;
        }
        void showdist(){
            cout << feet << "-" << inches ;
        }
};
int main(){
    cout<< "Vanshika Aggarwal"<< endl;
    cout<< "Roll Number: 22001003138" << endl;

    Distance dist; 
    dist.getdist(); 
    dist.showdist(); 
    Distance* distptr; 
    distptr = new Distance; 
    distptr->getdist(); 
    distptr->showdist(); 
    cout << endl;
    return 0;
}