#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main(){
  int n, m;
  cin >> n >> m;
  vector<pair<int,int>> adj[n];

  for(int i = 0; i < m; i++){
    int a,b,c;
    cin >> a >> b >> c;
    adj[a-1].push_back(make_pair(b-1, c));
  }

  vector<int> distance(n, -1);
  vector<bool> processed(n, false);
  distance[0] = 0;
  priority_queue<pair<int,int>> q;
  q.push({0, 0});
  while(!q.empty()){
    int a = q.top().second; q.pop();
    // cout << "a is" << a << endl;
    if(processed[a]) continue;
    processed[a] = true;
    for(auto u: adj[a]){
      int w = u.second;
      int b = u.first;
      // cout << w << " " << distance[a] << endl;
      if(distance[a] == -1) continue;
      if(distance[b] == -1){
        distance[b] = distance[a] + w;
        q.push({-distance[b], b});
      }
      else{
        if(distance[a] + w < distance[b]){
          distance[b] = distance[a] + w;
          q.push({-distance[b], b});
        }
      }
   }
  }

  for(int i: distance){
    printf("%lld ", i);
  }
  printf("\n");


}
