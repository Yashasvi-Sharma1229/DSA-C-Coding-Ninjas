#include <iostream>
using namespace std;

int main() {
    int n,c=0,m,rev=0;
    cin>>n;
    while(n!=0){
       m=n%10;
       rev=rev*10+m;
       n=n/10;
     }
     cout<<rev;
}
