// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the longest subsequence
// from the given array with maximum sum
void longestSubWithMaxSum(int arr[], int N)
{
	// Stores the largest element
	// of the array
	int Max = *max_element(arr,
						arr + N);

	// If Max is less than 0
	if (Max < 0) {

		// Print the largest element
		// of the array
		cout << Max;
		return;
	}

	// Traverse the array
	for (int i = 0; i < N; i++) {

		// If arr[i] is greater
		// than or equal to 0
		if (arr[i] >= 0) {

			// Print elements of
			// the subsequence
			cout << arr[i] << " ";
		}
	}
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, -4, -2, 3, 0 };

	int N = sizeof(arr) / sizeof(arr[0]);

	longestSubWithMaxSum(arr, N);
	return 0;
}
