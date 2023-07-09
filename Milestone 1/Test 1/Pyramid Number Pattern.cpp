#include<iostream>
using namespace std;
int main(){
#include<iostream>
using namespace std;



  // Write your code here

  int n,i=1;
    cin>>n;
    while(i<=n){
      int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        int w=i;
        while(j<=i){
         cout<<w;
          w--;
            j++;
        }
       j=2;
        w=2;
        while(j<=i){
            cout<<j;

            j++;
        }
        cout<<endl;
        i++;
    }
}
