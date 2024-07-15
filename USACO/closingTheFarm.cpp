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

vector<int> paths[3001];
vector<bool> ans(3001);

bool bfs(int n, set<int> removed){
  bool visited[3001] ={0};
  int count = 0;

  for(int i = 0; i < n; i++){

    if(!visited[i] && removed.count(i) != 1){
      count++;
      queue<int> q;
      visited[i] = true;
      q.push(i);
      while(!q.empty()){
        int s = q.front(); q.pop();
        for(auto u: paths[s]){
          if(!visited[u] && removed.count(u) != 1){
            visited[u] = true;
            q.push(u);
          }
        }
      }
    }
  }

  if(count > 1){
    return true;
  }
  else{
    return false;
  }

}



int32_t main(){

  freopen("closing.in","r",stdin);
  freopen("closing.out", "w", stdout);

  int n, m; cin >> n >> m;

  for(int i = 0; i < m; i++){
    int a, b; cin >> a >> b;
    a--;  b--;
    paths[a].push_back(b);
    paths[b].push_back(a);
  }
  set<int> removed;
  for(int i = 0; i < n; i++){
    ans[i] = bfs(n, removed);
    int a; cin >> a;
    a--;
    removed.insert(a);
  }

  for(int i = 0; i < n; i++){
    if(!ans[i]){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
  }

}
