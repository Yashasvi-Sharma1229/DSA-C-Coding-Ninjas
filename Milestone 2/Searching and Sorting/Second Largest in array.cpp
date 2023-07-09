
#include <iostream>
using namespace std;

#include "solution.h"

//answer
#include<climits>
int findSecondLargest(int *input, int n)
{
    //Write your code here
    int i,max=INT_MIN,secmax=max;
    for(i=0;i<n;i++){
     if(input[i]>max){
     secmax=max;
     max=input[i];
     }
     else if(input[i]>secmax&&input[i]<max){
      secmax=input[i];
     }
    }
    return secmax;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = findSecondLargest(arr, n);
    cout<<ans;
    return 0;
}
