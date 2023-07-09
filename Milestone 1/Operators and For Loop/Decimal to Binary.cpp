#include <iostream>
using namespace std;
int main() {
  int n,m=0;
    long ans=0,i=1;
  cin>>n;
  while(n!=0){
      m=n%2;
      ans=ans+m*i;
      i=i*10;

      n=n/2;
     }

     cout<<ans;

}
