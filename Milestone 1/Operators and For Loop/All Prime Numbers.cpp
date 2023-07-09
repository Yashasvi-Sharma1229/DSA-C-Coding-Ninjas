#include<iostream>
using namespace std;
int main(){
int n,i,flag=0,j;
cin>>n;
for(i=2;i<=n;i++){
  for(j=2;j<i;j++){
    if(i%j==0){
      flag=1;
      break;
    }
    else{

flag=0;
}

     }
  if(flag==0){
    cout<<i<<endl;
    }
}

}
