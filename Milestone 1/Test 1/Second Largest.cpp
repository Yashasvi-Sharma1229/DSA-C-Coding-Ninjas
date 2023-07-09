#include<climits>
#include<iostream>
using namespace std;
int main(){
int n,i=1,num,maxnum=INT_MIN,sec=INT_MIN;
cin>>n;
 while(i<=n){
 cin>>num;
  if(num>maxnum){
  sec=maxnum;
   maxnum=num;
  }
  else if(num>sec&&num!=maxnum){
  sec=num;
  }
  i++;
  }
  cout<<sec;
 }


