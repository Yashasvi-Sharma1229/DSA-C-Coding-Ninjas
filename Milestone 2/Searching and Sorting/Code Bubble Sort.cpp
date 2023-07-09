#include <bits/stdc++.h>

using namespace std;
#include "solution.h"

class Runner {
    vector<int> v;

public:
    void takeInput() {
        int n;
        cin >> n;
        v.assign(n, 0);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
    }

    void execute() {
        auto c = v;
        bubbleSort(c, c.size());
    }

    void executeAndPrintOutput() {
        auto c = v;
        bubbleSort(c, c.size());
        for (int i = 0; i < c.size(); ++i)
            cout << c[i] << ' ';
        cout << endl;
    }
};

//answer
void bubbleSort(int *input,int size){
int i=0,j,max,temp,k=size-1;
while(i<k){
  int maxind=0;
  for(j=1;j<size;j++){
    max=input[maxind];
    if(input[j]<max){
     temp=input[j];
     input[j]=max;
     input[maxind]=temp;
    }
    maxind++;      //maxind increases after every comparison
   }
   k--;         //k dec after round to reduce no. of comparisons 
 }
 /* for(i=0;i<size;i++){
  cout<<input[i]<<" "<<endl;
  }  */
}

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
