#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


vector<int> current_path;
vector<int> graph[100001];
vector<bool> visited(100001, false);



bool dfs(int node, int prev){
  current_path.push_back(node);
  visited[node] = true;

  for(auto i: graph[node]){
    if(visited[i] && i != prev){
      current_path.push_back(i);
      return true;
    }
    else if(!visited[i]){
      bool ans = dfs(i, node);
      if(ans){
        return ans;
      }
    }
  }

  current_path.pop_back();

  return false;
}

int main(){
  int n, m;
  cin >> n >> m;


  for(int i = 0; i < m; i++){
    int a,b;
    cin >> a >> b;
    a--; b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for(int i = 0; i < n; i++){
    if(!visited[i]){
      bool ans = dfs(i, -1);
      if(ans){



        int root = current_path[current_path.size() -1];

        while(current_path[0] != root){
          current_path.erase(current_path.begin());
        }

        cout << current_path.size() << endl;
        for(int i: current_path){
          cout << i + 1 << " ";
        }
        cout << endl;
        return 0;
      }

    }
  }
  cout << "IMPOSSIBLE" << endl;
  return 0;
}
