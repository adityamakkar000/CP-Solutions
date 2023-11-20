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

  freopen("pails.in","r",stdin);
  freopen("pails.out", "w", stdout);

  int x,y,m; cin >> x >> y >> m;

  int n = floor(m/x);
  int max_value = 0;

  for(int i = 0; i <= n; i++){
    int a = i*x + floor((m-(i*x))/y)*y;
    max_value = max(max_value, a);
  }

  cout << max_value;
}
