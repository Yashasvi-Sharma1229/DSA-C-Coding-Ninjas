#include<iostream>
using namespace std;

//answer

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
   int n,i=0,sum_[1000000],sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>sum_[i];
    }
    sum=0;
    for(i=0;i<n;i++){
        sum+=sum_[i];
    }
    cout<<sum;
}


