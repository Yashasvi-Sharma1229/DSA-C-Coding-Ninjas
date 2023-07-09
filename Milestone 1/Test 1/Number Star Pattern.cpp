#include<iostream>
using namespace std;
int main(){
int n,i=1;
cin>>n;
while(i<=n){
 int j=1;
 while(j<=n-i+1){
  cout<<j;
  j++;
  }
  int k=1;
  while(k<=i-1){
   cout<<"*";
   k++;
  }
int e=2;
while(e<=i){
  cout<<"*";
  e++;
  }
j=1;
int w=n-i+1;
  while(j<=n-i+1){
  cout<<w;
  w--;
  j++;
  }
  cout<<endl;
  i++;
 }
 }

