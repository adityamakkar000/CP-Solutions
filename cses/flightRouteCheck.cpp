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

  int count = 0;
  vector<int> connections;
  for(int i = 0; i < n; i++){
    if(!visited[i]){
      count++;
      connections.push_back(i);
      dfs(i,v);
    }
  }
  int ans = count - 1;
  cout << ans << endl;
  for(int i = 0; i < ans; i++){
    cout << connections[i]+1 << " " << connections[i+1]+1 << endl;
  }
}


