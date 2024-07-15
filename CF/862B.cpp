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

vector<int> v[100001];
bool visited[100001];



int32_t main(){
  int n; cin >> n;
  for(int i = 0; i < n-1; i++){
    int a,b; cin >> a >> b;
    a--; b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  
}
