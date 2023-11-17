#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long int

int32_t main(){

  freopen("mixmilk.in","r",stdin);
  freopen("mixmilk.out", "w", stdout);

  vector<pair<int,int>> milks;

  for(int i = 0; i < 3; i++){
    int a,b; cin >> a >> b;
    milks.push_back(make_pair(a,b));
  }

  for(int i = 0; i < 100; i++){

    int current = i % 3;
    int after = (i+1)%3;

    int milkinone = milks[current].second;
    int milkintwo = milks[after].second;
    int milkmax = milks[after].first;

    int diff = milkmax - milkintwo;
    if(milkinone >= diff){
      milks[after].second = milkmax;
      milks[current].second = milkinone - diff;
    }
    else{
      milks[current].second = 0;
      milks[after].second = milkintwo + milkinone;
    }

    // cout << milks[0].second << " " << milks[1].second << " " << milks[2].second << endl;
  }

  for(auto k: milks){
    cout << k.second << endl;
  }


}
