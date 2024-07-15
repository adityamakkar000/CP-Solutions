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

vector<bool> visited;

void dfs(int i, vector<int> v[]){
  if (visited[i]) return;
  visited[i] = true;
  for(auto u: v[i]){
    dfs(u,v);
  }
}


int32_t main(){


  int n, m; cin >> n >> m;
  vector<int> v[n]; vector<bool> temp(n,false);
  visited = temp;

  for(int i = 0; i < m; i++){
    int a, b; cin >> a >> b;
    a--; b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  dfs(0); 
}


