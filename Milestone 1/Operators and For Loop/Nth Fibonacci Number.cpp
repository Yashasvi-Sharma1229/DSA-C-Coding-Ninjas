
#include<iostream>
using namespace std;
int main(){
int n,a=1,b=1,c,i;
cin>>n;
if(n<=2){
cout<<a;



}
else{
for(i=2;i<n;i++){
  c=a+b;
  a=b;
  b=c;

     }
    cout<<c;
}



}
