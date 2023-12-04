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


int32_t main(){

  freopen("notlast.in","r",stdin);
  freopen("notlast.out", "w", stdout);

  int n; cin >> n;

  map<string, int> cows;

  cows["Bessie"] = 0;
  cows["Elsie"] = 0;
  cows["Daisy"] = 0;
  cows["Gertie"] = 0;
  cows["Annabelle"] = 0;
  cows["Maggie"] = 0;
  cows["Henrietta"] = 0;

  for(int i = 0; i < n; i++){
    string a; int b;
    cin >> a >> b;
    cows[a] += b;
  }
  set<int> milks;
  for(auto k: cows){
    milks.insert(k.second);
  }

  int miniumum = *milks.begin();
  bool check = true;

  int true_value = *milks.begin();

  if(milks.size() != 1){
    true_value = *next(milks.begin(), 1);
    check = false;
  }

  int c = 0;

  for(auto  k: cows){
    if(k.second  == true_value){
      c++;
    }
  }

  if(check || c != 1) cout << "Tie" << endl;
  else{
    for(auto k: cows){
      if(k.second == true_value){
        cout << k.first << endl;
        break;
      }
    }
  }


}
