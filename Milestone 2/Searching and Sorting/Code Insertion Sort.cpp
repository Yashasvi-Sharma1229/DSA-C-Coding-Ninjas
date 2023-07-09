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
        insertionSort(c, c.size());
    }

    void executeAndPrintOutput() {
        auto c = v;
        insertionSort(c, c.size());
        for (int i = 0; i < c.size(); ++i)
            cout << c[i] << ' ';
        cout << endl;
    }
};

//answer
void insertionSort(int *input,int size){
int i=0,j,k,temp;
for(i=0;i<size;i++){
  for(j=i-1;j>=0;j--){
    if(input[i]<input[j]){
     temp=input[i];
     input[i]=input[j];
     input[j]=temp;
     i--;
     }
      else{
          break;  //to break the loop as soon as the condition becomes false,to save the time otherwise TLE
      }
   }
 }
 /* for(i=0;i<size;i++){
   cout<<input[i]<<" ";
 }
 cout<<endl;    */
}

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
