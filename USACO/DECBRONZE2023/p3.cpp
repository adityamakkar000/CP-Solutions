#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long int

void solve() {
  int n; cin >> n;
  vector<int> plants;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    plants.push_back(a);
  }
  vector<int> growth_rate;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    growth_rate.push_back(a);
  }
  vector<int> targets;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    targets.push_back(a);
  }

  struct plant{
    int intial_height;
    int gr;
    int target;
    int p;
  }

  vector<plant> plants;
  for(int i = 0; i < n; i++){
    plant p;
    p.intial_height = plants[i];
    p.gr = growth_rate[i];
    p.target = targets[i];
    p.p = 0;
    plants.push_back(p);
  }

  sort(plants.begin(), plants.end(), [](plant a, plant b){
    return a.intial_height < b.intial_height;
  });

  for(int i = 0; i < n; i++){
    plants[i].p = n-1-i;
  }

  bool check = true;
  for(int i = 0; i < n; i++){
    if(plants[i].p !=  plants[i].target){
      check = false;
      break;
    }
  }

  if(check){
    cout << 0 << endl;
  else{
    bool
  }


}


int32_t main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
}
