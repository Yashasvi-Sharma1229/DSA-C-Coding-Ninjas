#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#include "solution.h"


class Runner
{
    int t = 1;
    
    vector<int> v;
    int x;
    
public:
    void takeInput()
    {
        int n; cin >> n;
        assert(1 <= n && n <= (int)1e4);
        v.assign(n, 0);
        for(int i = 0; i < n; ++i) cin >> v[i];
        cin >> x;
    }
    void execute()
    {
        vector<int> copy = v;
        search(copy, x);
    }

    void executeAndPrintOutput()
    {
        vector<int> copy = v;
        int ans = search(copy, x);
        cout << ans << '\n';
    }
};

//answer
int binarySearch(int *input,int n,int x){
int s=0,e=n,mid;
while(s<=e){
mid=(s+e)/2;
 if(input[mid]==x){
 return mid;
 }
else if(input[mid]>x){
   e=mid-1;
  }
  else{
  s=mid+1;
  }
}
return -1;
}

int main()
{
    // freopen("./Testcases/large/in/input11.txt", "r", stdin);
    // freopen("./Testcases/large/out/output11.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
