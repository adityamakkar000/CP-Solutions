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

  int n, k; cin >> n >> k;
  vector<int> v;
  for(int i = 0; i <n; i++){
    int a; cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());
  int cost = 0;
  int c = 1;
  int b = 0;

  for(int i = 0; i < n; i++){
    int diff = v[i] - v[b];
    c = i - b;
    if((diff - 1 -c)/c >  k){
      cost += v[i-1] - v[b] + 1 + k;
      b = i;
    }

    if(i == (n-1)){
      cost += v[i] - v[b] + 1 + k;
    }

  }

  cout << cost << endl;
}
