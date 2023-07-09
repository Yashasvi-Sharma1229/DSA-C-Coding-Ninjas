#include<iostream>
using namespace std;
int main(){
char c;
c=cin.get();
int c_dig=0;
int c_space=0,c_ch=0;
while(c!='$'){
  if(c>=48&&c<=57){
    c_dig++;

  }
  else if(c>='a'&&c<='z'){
    c_ch++;

  }
  else if(c==' '||c=='\t'||c=='\n'){
    c_space++;

  }
  c=cin.get();

}
cout<<c_ch<<" "<<c_dig<<" "<<c_space;

}
