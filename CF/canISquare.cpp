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

bool square(int n){
  int x;
  long double y = 1.0 * n;
  x = sqrt(y);
  return (x*x == n);
}

void solve(){
  int n; cin >> n;
  int sum = 0;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    sum += a;
  }
  if(square(sum)) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int32_t main(){
  int t; cin >> t;
  while(t--){
    solve();
  }

}
