#include <iostream>
using namespace std;
int main() {
    int n,terms,m=0;
    cin>>n;
    int i=1;
    while(i<=n+m){
    terms=3*i+2;
      if(terms%4!=0){
       cout<<terms<<" ";
       i++;
      }
      else{
      m++;
      i++;

      }

}
    }
