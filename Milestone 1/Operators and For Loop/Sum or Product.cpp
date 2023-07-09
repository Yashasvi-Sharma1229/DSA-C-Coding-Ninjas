#include<iostream>
using namespace std;
int main(){
int sum=0,product=1,n,c;
cin>>n;
cin>>c;
if(c==1){
for(int i=1;i<=n;i++){
   sum+=i;
   }
 cout<<sum;
}
else if(c==2){
for(int i=1;i<=n;i++){
   product*=i;
}
 cout<<product;
}
else{
 cout<<"-1";
 }

}
