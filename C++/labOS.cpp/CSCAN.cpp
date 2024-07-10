#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void CSCAN(int arr[], int head, int& size, int disk_size)
{
	int seek_count = 0;
	int distance, cur_track;
	vector<int> left, right;
	vector<int> seek_sequence;
	left.push_back(0);
	right.push_back(disk_size - 1);
	for (int i = 0; i < size; i++) {
		if (arr[i] < head)
			left.push_back(arr[i]);
		if (arr[i] > head)
			right.push_back(arr[i]);
	}

	// sorting left and right vectors
	sort(left.begin(), left.end());
	sort(right.begin(), right.end());


	for (int i = 0; i < right.size(); i++) {
		cur_track = right[i];
		seek_sequence.push_back(cur_track);

		// calculate absolute distance
		distance = abs(cur_track - head);
		seek_count += distance;

		head = cur_track;
	}
	head = 0;
	seek_count += (disk_size - 1);
	for (int i = 0; i < left.size(); i++) {
		cur_track = left[i];

		seek_sequence.push_back(cur_track);

		// calculate absolute distance
		distance = abs(cur_track - head);

		// increase the total count
		seek_count += distance;

		// accessed track is now the new head
		head = cur_track;
	}

	cout << "Total number of seek operations = "
		<< seek_count << endl;

	cout << "Seek Sequence is" << endl;

	for (int i = 0; i < seek_sequence.size(); i++) {
		cout << seek_sequence[i] << "  ";
	}
}
int main()
{
	int arr[] = { 95,180,34,119,11,123,62,64 };
    int size= 8;
	int head = 50;
    int disk_size= 200;
    cout<< "Name: Vanshika Aggarwal "<< endl;
    cout<< "Roll No. 22001003138"<< endl;

	cout << "Initial position of head: " << head << endl;
	CSCAN(arr, head, size, disk_size);

	return 0;
}
