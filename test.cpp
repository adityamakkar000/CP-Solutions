#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long

int32_t main()
{
  int n = 3;
  vector<vector<int>> final;

  for (int b = 0; b < (1 << n); b++)
  {

    vector<int> subset;
    for (int i = 0; i < n; i++)
    {
      if (b & (1 << i))
        subset.push_back(i);
    }
    final.push_back(subset);
  }

  // for(auto k: final){
  //   for(int i: k){
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }

}
