#include <iostream>
#include "solution.h"
using namespace std;

//answer
void reverseStringWordWise(char input[]) {
  int i = 0, n = 0;
  while (input[i] != '\0') {
    n++;
    i++;
  }
  int j = n - 1, temp;
  i = 0;
  while (i <= j) {
    temp = input[i];
    input[i] = input[j];
    input[j] = temp;
    i++;
    j--;
  }
  i = 0, j = n - 1;
  ;
  while (j >= 0) {
    if ((input[j] == ' ') || j == 0) {
      int d = j + 1;
      if (j == 0) {
        d = 0;
      }
      while (d < n) {
        temp = input[d];
        input[d] = input[n - 1];
        input[n - 1] = temp;
        d++;
        n--;
      }
      input[j] = input[j];
      n = j;
    }
    j--;
  }
 // cout << input;
  //   cout << input;
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
