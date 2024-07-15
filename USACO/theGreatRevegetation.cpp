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

vector<int> c;

int color(int s, vector<int>v[]){
  set<int> colorings = {1,2,3,4};
  for(auto u: v[s]){
    if(c[u] != 0){
      colorings.erase(c[u]);
    }
  }
  int ans = *colorings.begin();
  return ans;
}

void dfs(int s, vector<int>v[], bool visited[]){

  if(visited[s]) return;
  visited[s] = true;
  c[s] = color(s,v);
  sort(v[s].begin(), v[s].end());
  for(auto u:v[s]){
    dfs(u,v,visited);
  }
}


int32_t main(){
  freopen("revegetate.in","r",stdin);
  freopen("revegetate.out", "w", stdout);

  int n,m;

  cin >> n >> m;

  vector<int> v[n];
  vector<int> temp(n,0);
  c = temp;
  bool visited[n] = {0};

  for(int i = 0; i < m; i++){
    int a, b; cin >> a >> b;
    a--;b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  dfs(0, v, visited);

  for(auto i: c){
    cout << i;
  }
}


