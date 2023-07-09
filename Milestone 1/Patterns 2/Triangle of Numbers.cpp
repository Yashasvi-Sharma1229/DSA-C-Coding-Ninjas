#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
  int n,i=1;
    cin>>n;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1,q=i;
        while(j<=i){

            cout<<q;

            q++;

            j++;
        }
        int w=2*(i-1);
        while(w>=i){
            cout<<w;
            w--;
        }
        cout<<endl;
        i++;
    }
}
