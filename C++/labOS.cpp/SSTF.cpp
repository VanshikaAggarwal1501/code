
#include <iostream>
#include<limits.h>
using namespace std;
void calculatedifference(int request[], int head, int diff[][2], int n)
{
	for(int i = 0; i < n; i++)
	{
		diff[i][0] = abs(head - request[i]);
	}
} 
int findMIN(int diff[][2], int n)
{
	int index = -1;
	int minimum = INT_MAX;

	for(int i = 0; i < n; i++)
	{
		if (!diff[i][1] && minimum > diff[i][0])
		{
			minimum = diff[i][0];
			index = i;
		}
	}
	return index;
}

void shortestSeekTimeFirst(int request[], int head, int& n)
{
	if (n == 0)
	{
		return;
	}
	int diff[n][2] = { { 0, 0 } };
	 
	int seekcount = 0;
	
	int seeksequence[n+1] = {0};
	
	for(int i = 0; i < n; i++){
		seeksequence[i] = head;
		calculatedifference(request, head, diff, n);
		int index = findMIN(diff, n);
		diff[index][1] = 1;
		
		seekcount += diff[index][0]; 
		head = request[index];
	}
	seeksequence[n] = head;
	
	cout << "Total number of seek operations = " << seekcount << endl;
	cout << "Seek sequence is : " << "\n";
	
	for(int i = 0; i <= n; i++) {
		cout << seeksequence[i] << "  ";
	}
}
int main(){
    cout<< "Name: Vanshika Aggarwal"<< endl;
    cout<< "Roll NO. 22001003138"<< endl;
	int n = 8;
	int proc[] = { 95,180,34,119,11,123,62,64 };
	
	shortestSeekTimeFirst(proc, 50, n);
	
	return 0;
}
