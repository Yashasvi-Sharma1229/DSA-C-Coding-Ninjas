#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"

//answer
void sort012(int *arr, int n)
{
    //Write your code here
    int t,n0=0,n2=n-1,i;
    while(i<=n2){
    if(arr[i]==0){
     t=arr[i];
     arr[i]=arr[n0];
     arr[n0]=t;
     n0++;
     i++;
     }
    else if(arr[i]==2){
     t=arr[i];
     arr[i]=arr[n2];
     arr[n2]=t;
     n2--;
     }
     else if(arr[i]==1){
     i++;
     }
     else{
     break;
     }
    }
 /*   for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;  */
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}
