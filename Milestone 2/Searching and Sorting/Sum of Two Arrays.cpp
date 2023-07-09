#include <iostream>
using namespace std;

#include "solution.h"

//answer
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{

int k=max(size1,size2),i=size1-1,j=size2-1,n,c=0;
while(i>=0&&j>=0)
{
    n=input1[i]+input2[j]+c;
    output[k--]=n%10;
    c=n/10;
    i--;
    j--;
}
while(i>=0)
{
    n=input1[i]+c;
    output[k--]=n%10;
    c=n/10;
    i--;
}
while(j>=0)
{
 n=input2[j]+c;
    output[k--]=n%10;
    c=n/10;
    j--;
}
output[k]=c;
}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}
