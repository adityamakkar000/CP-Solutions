#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define int long long
using namespace std;

int32_t main(){
  int n,m,q;
  cin >> n >> m >> q;
  vector<vector<int>> distance(n, vector<int> (n, -1));

  for(int i = 0; i < m; i++){
    int a,b, c; cin >> a >> b >> c;
    a--; b--;
    if (distance[a][b] != -1){
      c = min(c, distance[a][b]);
    }
    distance[a][b] = c;
    distance[b][a] = c;
  }


  for(int i = 0; i < n; i++) distance[i][i] = 0;

  for(int k = 0; k < n; k++){
    for(int j = 0; j < n; j++){
      for(int i = 0; i < n; i++){
        if(distance[j][k] == - 1 || distance[k][i] == -1) continue;
        if(distance[i][j] == -1){
          distance[i][j] = distance[j][k] + distance[k][i];
        }
        else{
          distance[i][j] = min (distance[i][j], distance[j][k] + distance[k][i]);
        }
      }
    }
  }

  for(int i = 0; i < q; i++){
    int a,b; cin >> a >> b;
    a--; b--;
    cout << distance[a][b] << endl;
  }

}