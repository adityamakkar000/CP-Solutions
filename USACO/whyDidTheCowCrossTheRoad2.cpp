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


bool intersection(pair<int,int> v1, pair<int,int> v2){

  if(min(v2.first, v2.second) > max(v1.first, v1.second) || min(v1.first, v1.second) > max(v2.first, v2.second)){
    return false;
  }
  else if((min(v2.first, v2.second) > min(v1.first, v1.second) && max(v2.first, v2.second) < max(v1.first, v1.second))
  || (min(v1.first, v1.second) > min(v2.first, v2.second) && max(v1.first, v1.second) < max(v2.first, v2.second))){
    return false;
  }
  else return true;

}

int32_t main(){

  freopen("circlecross.in","r",stdin);
  freopen("circlecross.out", "w", stdout);

  string a; cin >> a;
  vector<vector<int>> v;
  for(int i = 0; i < 26; i++){
    vector<int> b;
    v.push_back(b);
  }

  for(int i = 0; i < 52; i++) v[static_cast<int>(a[i]) - static_cast<int>('A')].push_back(i);
  unordered_map<char, pair<int,int>> m;
  for(int i = 0; i < 52; i++) m[a[i]] = make_pair(v[static_cast<int>(a[i]) - static_cast<int>('A')][0],v[static_cast<int>(a[i]) - static_cast<int>('A')][1]);

  int count = 0;
  for(auto k: m){
    for(auto j: m ){
      if(k.first != j.first){
        if(intersection(k.second, j.second))count++;
      }
    }
  }
  cout << count/2 << endl;

}
