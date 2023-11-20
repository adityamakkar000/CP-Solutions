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
  vector<double> v;
  for(int i = 0; i < n; i++){
    double a; cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());

  if(n % 2 == 0){
    int ans = round((v[n/2] + v[(n/2) -1])/2);
    cout << ans << endl;
  } else{
    cout << v[(n-1)/2] << endl;
  }



}
