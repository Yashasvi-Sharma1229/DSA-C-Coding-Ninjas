
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    bool isDec=true;
    int n;
    cin>>n;
	int prev,curr;
    cin>>prev;
    int counter=1;
    while(counter<=n-1){
        cin>>curr;
        if(prev==curr){
            cout<<"false";
            return 0;
        }
        else if(curr>prev){
            if(isDec==true){
                isDec=false;
            }
            
        }
        else if(curr<prev){
            if(isDec==false){
                cout<<"false";
               return 0;
            }
        
        }
counter++;
        
    }
    cout<<"true";
}
