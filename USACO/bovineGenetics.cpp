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

bool check(set<char> a, set<char> b){
  for(char i: a){
    for(char k: b){
      if(i == k){
        return false;
      }
    }
  }
  return true;
}


int32_t main(){

  freopen("cownomics.in","r",stdin);
  freopen("cownomics.out", "w", stdout);

  int n,y;
  cin >> n >> y;

  vector<vector<char>> v;
  for(int i = 0; i < 2*n; i++){
    string a; cin >> a;
    vector<char> temp(a.begin(),a.end());
    v.push_back(temp);
  }
  int count = 0;


  for(int i = 0; i < y; i++){
    set<char> a, b;
    for(int k = 0;  k < n; k++){
      a.insert(v[k][i]);
    }
    for(int k = n+1; k < 2* n; k++){
      b.insert(v[k][i]);
    }

    if(check(a,b)) count ++;

  }

  cout << count << endl;
}
