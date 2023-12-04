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

int single_set(vector<set<int>> a){
  set<int> winner;
  int count = 0;
  for(auto k: a){
    if(k.size() == 1 && winner.count(*k.begin()) == 0){
      winner.insert(*k.begin());
      count++;
    }
  }
  return count;
}

int double_set(vector<set<int>> a){
  int count = 0;
  vector<pair<int,int>> v;
  for(auto k: a){
    if(k.size() == 2){
      bool check = false;
      for(auto i: v){
        int a = *k.begin();
        int b = *next(k.begin(),1);

        if(a == i.first ){
          if(b == i.second){
            check = true;
          }
        }
        if(a == i.second){
          if(b == i.first){
            check = true;
          }
        }
      }
      if(!check){
        count++;
        v.push_back(make_pair(*k.begin(), *next(k.begin(),1)));
      }
    }
  }
  return count;
}

int32_t main(){

  freopen("tttt.in","r",stdin);
  freopen("tttt.out", "w", stdout);

  vector<vector<int>> v;
  for(int i = 0; i < 3; i++){
    string a; cin >> a;
    vector<int> temp;
    for(char k: a) temp.push_back(k-'A');
    v.push_back(temp);
  }

  set<int> c1,c2,c3,r1,r2,r3,d1,d2;

  for(int i = 0; i < 3; i++) c1.insert(v[i][0]);
  for(int i = 0; i < 3; i++) c2.insert(v[i][1]);
  for(int i = 0; i < 3; i++) c3.insert(v[i][2]);

  for(int i = 0; i < 3; i++) r1.insert(v[0][i]);
  for(int i = 0; i < 3; i++) r2.insert(v[1][i]);
  for(int i = 0; i < 3; i++) r3.insert(v[2][i]);

  for(int i = 0; i < 3; i++) d1.insert(v[i][i]);
  for(int i = 0; i < 3; i++) d2.insert(v[2-i][i]);

  vector<set<int>> wins = {c1,c2,c3,r1,r2,r3,d1,d2};

  int s = single_set(wins);
  int d = double_set(wins);

  cout << s << endl;
  cout << d << endl;
}
