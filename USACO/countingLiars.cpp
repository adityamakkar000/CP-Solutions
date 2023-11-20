#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long


int32_t main()
{
  int n; cin >> n;
  vector<pair<char,int>> v;
  int m = 0;
  for(int i = 0; i < n; i++){
    char a; int b; cin >> a >> b;
    m = max(m,b);
    v.push_back(make_pair(a,b));
  }

  int ans = 0;

  for(int i = 0; i <= m; i++){
    int count = 0;
    for(auto k: v){
      char c = k.first;
      if(c == 'G'){
        if(i > k.second) count++;
      } else{
        if(i < k.second) count++;
      }
    }
    ans = max(ans,count);
  }

  cout << n - ans << endl;
}
