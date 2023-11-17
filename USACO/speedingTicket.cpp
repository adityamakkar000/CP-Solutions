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

  freopen("speeding.in","r",stdin);
  freopen("speeding.out", "w", stdout);

  vector<int> road(101,0);

  int n,m; cin >> n >> m;
  vector<pair<int,int>> limits;
  vector<pair<int,int>> bessie;

  for(int i = 0; i < n; i++){
    int a, b; cin >> a >> b;
    limits.push_back(make_pair(a,b));
  }
  for(int i = 0; i < m; i++){
    int c,d; cin >> c >> d; ;
    bessie.push_back(make_pair(c,d));
  }

  int current = 1;
  for(auto k: limits){
    for(int i = current; i < current +  k.first; i++){
      road[i] = k.second;
    }
    current += k.first;
  }

  // cout << "\n";

  int speed = 0;
  current = 1;
  for(auto k: bessie){
    for(int i = current; i < current + k.first; i++){
      // cout << road[i] << " ";
      speed = max(speed, (k.second - road[i]));
    }
    current +=  k.first;
  }
  cout << speed << endl;

}
