#include<iostream>
using namespace std;
#include "solution.h"

//answer
bool checkMember(int n){

  
   	int c=0,a=0,b=1;
	while(c<=n){
        if (c==n) return true;
 		c=a+b;
 		a=b;
 		b=c;
    }return false;                 
}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
