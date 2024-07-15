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

vector<int>  bfs(int i, vector<int> v[], vector<int> distance){
  queue<int> q;
  visited[i] = true;
  distance[i] = 0;
  q.push(i);
  while (!q.empty()){
    int s = q.front(); q.pop();
    for(auto u: v[s]){
      if(visited[u]){
        continue;
      }
      visited[u] = true;
      distance[u] = distance[s] + 1;
      q.push(u);
    }
  }
}


int32_t main(){
  int n, m; cin >> n >> m;
  vector<int> v[n]; vector<bool> temp(n,false);
  vectoer<int> distance(n,0);
  visited = temp;

  for(int i = 0; i < m; i++){
    int a, b; cin >> a >> b;
    a--; b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  bfs(0,v,distance);
}


