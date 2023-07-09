#include <iostream>
using namespace std;

int main() {
    int n,i=1,m=0,d=0;
    cin>>n;
    while(n!=0){
       m=n%10;
       d=m*i+d;
       i=i*2;;
       n=n/10;
      }
      cout<<d;
}
