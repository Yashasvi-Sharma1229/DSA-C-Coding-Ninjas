#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

//answer

void trimSpaces(char input[]) {
  int i = 0, n = 0;
  while (input[i] != '\0') {
    n++;
    i++;
  }
  int j = n - 1, temp, d;
  i = 0;
  while (j >= 0) {
    if (input[j] == ' ') {
      d = j;
      while (d < n) {
        temp = input[d];
        input[d] = input[d + 1];
        input[d + 1] = temp;
        d++;
      }
      n--;
    }
    j--;
  }
  //cout << input;
  //   cout << input;
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

