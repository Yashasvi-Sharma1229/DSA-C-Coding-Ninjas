#include <iostream>
using namespace std;

#include "solution.h"

//answer
using namespace std;
void rotate(int *input, int d, int n)
{
    //Write your code here
    int b[1000000],j=0,i=0,c=0;
    while(j<n){
    if(d<n&&c==0){
      b[j++]=input[d++];
     }
     else {
     c=1;
      b[j++]=input[i++];
      }
     }
     i=0;
     j=0;
     while(i<n){
      input[i++]=b[j++];
     }


  /*  for(i=0;i<n;i++){
    cout<<input[i]<<" ";
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

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
