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

  freopen("bcount.in","r",stdin);
  freopen("bcount.out", "w", stdout);

  int n, q; cin >> n >> q;

  vector<pair<int,int>> queries;
  vector<int> v1(n+1,0),v2(n+1,0),v3(n+1,0);

  v1[0] = 0;
  v2[0] = 0;
  v3[0] = 0;

  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v1[i+1] = v1[i];
    v2[i+1] = v2[i];
    v3[i+1] = v3[i];
    if(a == 1) v1[i+1]++;
    else if(a == 2) v2[i+1]++;
    else if(a == 3) v3[i+1]++;
  }

  for(int i = 0; i < q; i++){
    int a, b; cin >> a >> b;
    queries.push_back(make_pair(a,b));
  }

  // for(int i = 0; i < n+1; i++){
  //   cout << v1[i] << " "<<  v2[i] << " " << v3[i] << endl;
  // }

  for(auto k: queries){
    int ans1 = v1[k.second] - v1[k.first-1];
    int ans2 = v2[k.second] - v2[k.first-1];
    int ans3 = v3[k.second] - v3[k.first-1];

    cout << ans1 << " " << ans2 << " " << ans3 << endl;
  }


}
