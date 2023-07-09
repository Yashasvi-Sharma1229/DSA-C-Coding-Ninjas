#include<iostream>
using namespace std;
int main(){
int n,i=1,n1,n2;
cin>>n;
n1=n/2+1;
n2=n/2;
while(i<=n1){
   int k=1;
   while(k<=n1-i){
     cout<<" ";
     k++;
   }
   int j=1;
   while(j<=2*i-1){
     cout<<"*";
     j++;
   }
   cout<<endl;
   i++;
   }
    i=1;
   while(i<=n2){
     int k=1;
     while(k<=i){
        cout<<" ";
        k++;
        }
     int j=1;
     while(j<=n-2*i){
         cout<<"*";
         j++;
         }
         cout<<endl;
         i++;
       }

}
