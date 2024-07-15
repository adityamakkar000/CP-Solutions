#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define int long long int


int32_t main(){
  int n; cin >> n;
  int t; cin >> t;

  vector<int> m;

  for(int i = 0; i < n; i++){
    int a; cin >> a;
    m.push_back(a);
  }

  int l = 0, r = 1e18;

  int ans = 0;

  while(l <= r){
    int middle = r + (l-r)/2;
    int sum = 0;
    for(int i = 0; i < n; i++){
      sum += floor(middle/m[i]);
      if(sum > t) break;
    }

    if(sum >= t){
      ans = middle;
      r = middle - 1;
    }
    else{
      l = middle + 1;
    }
  }

  cout << ans << endl;

}
