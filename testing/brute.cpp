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

int bfs(vector<vector<int>> v, pair<int,int> start, int end){
  vector<vector<int>> dist;
  for(int i = 0; i < 2; i++){
    vector<int> temp;
    for(int j = 0; j < end; j++){
      temp.push_back(-1);
    }
    dist.push_back(temp);
  }
  queue<pair<int,int>> q;
  q.push(start);
  dist[0][0] = 0;

  while(!q.empty()){
    pair<int,int> curr = q.front(); q.pop();
    vector<pair<int,int>> adj;
    adj.push_back(make_pair(curr.first+1, curr.second));
    adj.push_back(make_pair(curr.first-1, curr.second));
    adj.push_back(make_pair(curr.first, curr.second+1));
    adj.push_back(make_pair(curr.first, curr.second-1));

    for(auto u: adj){
      if(u.first < 0 || u.first > 1 || u.second < 0 || u.second >= end) continue;
      if(v[u.first][u.second] == 0 && dist[u.first][u.second] == -1){
        dist[u.first][u.second] = dist[curr.first][curr.second] + 1;
        q.push(u);
      }
    }
  }
  // for(int i = 0; i < 2; i++){
  //   for(int j = 0; j < end; j++){
  //     cout << dist[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  return dist[0][end - 1];
}


int32_t main(){
  int n; cin >> n;

  vector<vector<int>> v;
  for(int i = 0; i < 2; i++){
    vector<int> temp;
    for(int j = 0; j < n; j++){
      temp.push_back(0);
    }
    v.push_back(temp);
  }

  for(int i = 0; i < n-1; i++){
    if((i-1) % 4 == 0) v[0][i] = 1;
    else if ((i+1) % 4 == 0) v[1][i] = 1;
  }


  int distance = bfs(v, make_pair(0,0), n);
  cout << distance << endl;



}
