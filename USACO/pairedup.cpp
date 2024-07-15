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


int32_t main(){

  freopen("pairup.in", "r", stdin);
  freopen("pairup.out", "w", stdout);

  int n; cin >> n;
  int m = 0;
  multiset<int> s;
  for(int i = 0; i < n; i++){
    int x,y; cin >> x >> y;
    m += x;
    for(int k = 0; k < x; k++){
      s.insert(y);
    }
  }

  int ans = 0;

  int left = 0, right = m-1;
  while(left < right){
    auto it_left = s.begin();
    auto it_right = s.begin();
    advance(it_left,left);
    advance(it_right, right);
    int sum = *it_left + *it_right;
    // cout << sum << endl;
    ans = max(sum, ans);
    left++;
    right--;
  }
  cout << ans << endl;

}
