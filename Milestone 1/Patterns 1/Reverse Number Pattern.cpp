#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        int k=i;
        while(j<=i){
            cout<<i-j+1;
            j++;
        
        }
        cout<<endl;
        i++;
    }
}


