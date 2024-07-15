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
  freopen("herding.in","r",stdin);
  freopen("herding.out", "w", stdout);

  int a,b,c;
  cin >> a >> b >> c;
  vector<int> v = {a,b,c};
  sort(v.begin(), v.end());


  int ans1 = 0;
  int ans2 = 0;


  if(v[2] -1 == v[1] && v[1] == v[0]+1){
    ans1 = 0;
  }else if(v[2]-v[1] == 2 || v[1]-v[0] == 2){
    ans1 = 1;
  }else{
    ans1 = 2;
  }

  ans2 = max(v[2]-v[1]-1, v[1]-v[0]-1);

  cout << ans1 << endl;
  cout << ans2 << endl;


}
