#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

//answer
bool checkPalindrome(char str[]) {
    // Write your code here
int i=0,n;
while(str[i]!='\0'){
    n++;
    i++;
}
int j=n-1;
i=0;
while(i<=j){
  if (str[i] == str[j]) {
    i++;
    j--;
  }
  else{
      return false;
    
    }
  }            
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
