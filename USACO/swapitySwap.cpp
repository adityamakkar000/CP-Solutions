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

  freopen("swap.in","r",stdin);
  freopen("swap.out", "w", stdout);

  int n, k;
  cin >> n >> k;

  int a1,a2,b1,b2;
  cin >> a1 >> a2 >> b1 >> b2;

  vector<int> positions;

  for(int i = 1; i <= n; i++){
    positions.push_back(i);
  }

  set<vector<int> > orderings;
  orderings.insert(positions);

  int count = 0;
  while (true){
    if (count == k){
      for(int i: positions){
        cout << i << endl;
      }
      return 0;
    }
    reverse(positions.begin() + a1 - 1, positions.begin() + a2);
    reverse(positions.begin() + b1 - 1, positions.begin() + b2);

    count++;
    if (orderings.count(positions) == 1){
      break;
    }
    else{
      orderings.insert(positions);
    }

  }

  int sim = k % count;

  for(int i = 0; i < sim ; i++){
    reverse(positions.begin() + a1 - 1, positions.begin() + a2);
    reverse(positions.begin() + b1 - 1, positions.begin() + b2);
  }

  for(int i: positions){
    cout << i << endl;
  }

}
