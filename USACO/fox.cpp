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

  int n; cin >> n;
  vector<int> v(n);
  for(int &i: v){
    cin >> i;
  }

  vector<int> q(n);

  for(int i = 0; i < n; i++){

    q[i] = v[i];
    for(int k = 1; k <= n; k++){
      int temp = (i+1) % k;
      q[i] ^= temp;
    }
  }

  int Q = q[0];
  for(int i = 1; i < n; i++){
     Q = Q ^ q[i];
  }
  cout <<  Q << endl;
}