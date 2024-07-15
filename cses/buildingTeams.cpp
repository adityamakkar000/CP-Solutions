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

vector<int> colors(100001,2);
vector<int> v[100001];

bool bfs(int n){
  for(int i = 0; i < n; i++){
    if(colors[i] == 2){
      queue<int> q;
      colors[i] = 0;
      q.push(i);
      while(!q.empty()){
        int s = q.front(); q.pop();
        for(auto u: v[s]){
          if(colors[u] == 2){
            colors[u] = (colors[s] + 1) % 2;
            q.push(u);
          }
          else{
            if(colors[u] == colors[s]) return false;
          }
        }
      }
    }
  }
  return true;
}


int32_t main(){
  int n, m; cin >> n >> m;

  for(int i = 0; i < m; i++){
    int a, b; cin >> a >> b;
    a--;b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  // cout << "h";
  bool check = bfs(n);
  if(!check) cout << "IMPOSSIBLE" << endl;
  else{
    for(int i = 0; i < n; i++){
      cout << colors[i] + 1 << " ";
    }
  }
}
