#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
 int n,i=1;
    cin>>n;
    char ch= 65;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch;
            
            j++;
            
        }
        cout<<endl;
        i++;
        ch++;
    }
}

