
#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
    cin>>ch;
    if(ch>=65&&ch<=90){
        cout<<"1";
    }
    else if(ch>=97&&ch<=122){
        cout<<"0";
    }
    else{
        cout<<"-1";
        }
}
