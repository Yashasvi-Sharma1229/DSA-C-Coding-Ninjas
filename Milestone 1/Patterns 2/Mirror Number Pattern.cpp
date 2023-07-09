#include<iostream>
using namespace std;
int main(){
 int n,i=1;
 cin>>n;
 while(i<=n){
 int k=1;
 while(k<=n-i){
   cout<<" ";
   k++;
 }
 int j=1;
 while(j<=i){
 cout<<j;
 j++;
 }
 cout<<endl;
 i++;

 }



}


