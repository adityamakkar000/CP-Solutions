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


int32_t main()
{

  freopen("cowqueue.in", "r", stdin);
  freopen("cowqueue.out", "w", stdout);

  int n; cin >> n;

  vector<pair<int,int>> v;

  for(int i = 0; i < n; i++){
    int a,b; cin >> a >> b;
    v.push_back(make_pair(a,b));
  }

  sort(v.begin(), v.end());

  int time = 0;
  for(int i = 0; i < n; i++){

    if(time < v[i].first){
      time = v[i].first + v[i].second;
    }
    else{
      time += v[i].second;
    }

  }
  cout << time << endl;

}
