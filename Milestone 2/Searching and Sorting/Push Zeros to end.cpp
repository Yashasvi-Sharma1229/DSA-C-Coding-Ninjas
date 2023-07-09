#include <iostream>
using namespace std;

#include "solution.h"

//answer
void pushZeroesEnd(int *input,int size){
int t, i,nonzero=0;
for(i=0;i<size;i++){
 if(input[i]!=0){
   t=input[i];
   input[i]=input[nonzero];
   input[nonzero]=t;
   nonzero++;
  }
 }
 /*for(i=0;i<size;i++){
  cout<<input[i]<<" ";
 }
 cout<<endl; */
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

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
