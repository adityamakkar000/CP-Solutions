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
  freopen("lineup.in","r",stdin);
  freopen("lineup.out", "w", stdout);


  int n; cin >> n;
  vector<pair<string, string>> v;
  for(int i = 0; i < n; i++){
    string a,b,c,d,e,f;
    cin >> a  >> b >> c >> d >> e >>f;
    v.push_back(make_pair(a,f));

  }

  vector<string> cows = {
    "Beatrice",
    "Sue",
    "Belinda",
    "Bessie",
    "Betsy",
    "Blue",
    "Bella",
    "Buttercup"
  };
  sort(cows.begin(), cows.end());

  do{

    map<string, int> pos;
    for(int i = 0; i < 8; i++){
      pos[cows[i]] = i;
    }
    bool check = true;
    for(auto i: v){
      if(abs(pos[i.first] - pos[i.second]) > 1){
        check = false;
        break;
      }
    }

    if(check){
      for(string i: cows){
        cout << i << "\n";
      }

      return 0;
    }

  } while(next_permutation(cows.begin(), cows.end()));

}
