#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define INF 0



void dfs(int node, vector<bool> &visited, vector<pair<int,int>> v[]){
  if(visited[node]) return ;
  visited[node] = true;
  for(auto i: v[node]){
    dfs(i.first, visited, v);
  }
}

int32_t main(){
  int n, m; cin >> n >> m;
  vector<pair<int,int>> v[n];

  for(int i = 0; i < m; i++){
    int a,b,c;
    cin >> a >> b >> c;
    a--; b--;
    c *= -1;
    v[a].push_back(make_pair(b,c));
  }

  vector<int> distance(n, 0);
  vector<bool> inf_array(n, true);
  inf_array[0] = false;

  for(int i = 0; i < n; i++){
    for(int k = 0; k < n; k++){
      for(auto i: v[k]){
        int a = k,b = i.first, w = i.second;
        if(inf_array[a]) continue;
        if(inf_array[b]){
          distance[b] = distance[a] + w;
          inf_array[b] = false;
          continue;
        }
        distance[b] = min(distance[b] , distance[a] + w);
      }
    }
  }

  vector<int> cycle_nodes;

  for(int k = 0; k < n; k++){
    for(auto i: v[k]){
      int a = k,b = i.first, w = i.second;
      if(distance[a] + w < distance[b]){
        cycle_nodes.push_back(b);
      }
      distance[b] = min(distance[b] , distance[a] + w);
    }
  }

  vector<bool> visited(n, false);
  dfs(0, visited, v);
  for(int i = 0; i < cycle_nodes.size(); i++){
    vector<bool> vis(n, false);
    dfs(cycle_nodes[i], vis, v);
    if(visited[cycle_nodes[i]] && vis[n-1]){
      cout << -1 << endl;
      return 0;
    }
  }

  cout << -1 * distance[n-1] << endl;
  return 0;

}
