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

  int n; cin >> n;
  if(n == 2){
    cout << 1 << endl;
    return 0;
  }
  cout << 2*((n-3)/4) + n + 1<< endl;

}
