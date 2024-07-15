#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long int


int32_t main(){

  freopen("div7.in","r",stdin);
  freopen("div7.out", "w", stdout);

  int n; cin >> n;
  vector<int> v(n+1,0);
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v[i+1] = (v[i] + a) % 7;
  }

  int m = 0;

  for(int i = n; i >= 0; i--){
    for(int j = 0; j <= i; j++){
      int diff = v[i]-v[j];
      if(diff % 7 == 0){
        m = max(m, i-j);
      }
    }
  }
  cout << m << endl;

}
