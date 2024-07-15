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

void solve(){
  int a,b,c; cin >> a >> b >> c;
  if(a == b){
    cout << c << endl;
  }
  else if(a == c){
    cout << b << endl;
  }
  else if(b == c){
    cout << a << endl;
  }
}

int32_t main(){
  int t; cin >> t;
  while(t--){
    solve();
  }

}
