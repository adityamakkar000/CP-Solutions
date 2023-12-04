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
  freopen("herding.in","r",stdin);
  freopen("herding.out", "w", stdout);

  vector<int> v(3,0);
  for(int i = 0; i < 3; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int d1 = v[1]-v[0]-1;
  int d2 = v[2]-v[1]-1;

  if(min(d2,d1) == 0){
    cout << max(d2,d1) << endl;
    cout << max(d2,d1) << endl;
  }
  else{
    cout << min(d2,d1) << endl;
    cout << max(d2,d1) << endl;
  }
}
