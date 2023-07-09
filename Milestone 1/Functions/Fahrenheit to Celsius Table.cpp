#include<iostream>
using namespace std;
#include "Solution.h"

//answer
void printTable(int start, int end, int step) {
   int cel=1;
    for(int i=start;i<=end;i+=step)
    {
         cel = (i-32) * 5/9;
        cout<< i << "\t"<<cel << endl;
    }
    
}


int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}
