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

int32_t main(){

  int n; cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v.push_back(a);
  }

  int ans = INT64_MAX;


  for(int b = 0; b < (1 << n); b++){
    int sum1 = 0,sum2 = 0;
    for(int i = 0; i < n; i++){
      if(b & (1 << i)){
        sum1 += v[i];
      } else{
        sum2 += v[i];
      }
    }
    ans = min(ans, abs(sum1-sum2));
  }

  cout << ans << endl;

}
