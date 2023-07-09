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
    char ch=65+n-i;

        while(j<=i){
        cout<<ch;

        j++;
        ch++;
        }
        cout<<endl;

        i++;

    }
}
