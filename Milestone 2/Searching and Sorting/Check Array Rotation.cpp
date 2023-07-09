#include <iostream>
using namespace std;

#include "solution.h"

//answer
int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int d,i,c=0;
    for(i=0;i<size-1;i++){
    d=input[i+1]-input[i];
    if(input[i+1]>input[i]&&d>0&&c==0){
     }
     else if(input[i+1]<input[i]&&d<=0){
     c=1;
          return i+1;
     }

    }
    return 0;
}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}
