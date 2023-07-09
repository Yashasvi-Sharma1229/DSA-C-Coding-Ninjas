#include <iostream>
using namespace std;

#include "solution.h"

//answer


void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<size1 && j <size2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            ans[k++] = arr1[i++];/* k++ increases the value of k,
            but returns the previous value.Thus, a[k++] returns a[k] 
            with the side-effect of increasing kafter returning the value of a[k]*/
        else
            ans[k++] = arr2[j++];
    }
 
    // Store remaining elements of first array
    while (i < size1)
        ans[k++] = arr1[i++];
 
    // Store remaining elements of second array
    while (j < size2)
        ans[k++] = arr2[j++];

}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int arr1[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int arr2[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int ans[size1+size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;

	}
}
