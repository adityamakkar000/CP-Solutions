#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long



int32_t main(){


  // freopen("paintbarn.in","r",stdin);
  // freopen("paintbarn.out", "w", stdout);

  int n, m; cin >> n >> m;
  int cnst = 1002;
  int arr[1002][1002] = {0};

  int q[n][4];
  for(int i = 0; i < n; i++){
    cin >> q[i][0] >> q[i][1] >> q[i][2] >> q[i][3];
  }

  for(auto i: q){
    for(int k = i[0]; k < i[2]; k++){
      arr[k][i[1]]++;
      arr[k][i[3]]--;
    }
  }


  for(int i = 0; i < cnst; i++){
    for(int k = 1; k < cnst; k++){
      arr[i][k] += arr[i][k-1];
    }
  }

  // for(int i = 0; i < 10; i++){
  //   for(int k = 0; k < 10; k++){
  //     cout << arr[i][k] << " ";
  //   }
  //   cout << endl;
  // }



  int ans = 0;

  for(int i = 0; i < cnst; i++){
     for(int k = 0; k < cnst; k++){
      if(arr[i][k] == m) ans++;
     }
  }

  cout << ans << endl;



}