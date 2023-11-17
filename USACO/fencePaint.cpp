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

  freopen("paint.in","r",stdin);
  freopen("paint.out", "w", stdout);

  vector<bool> arr(101,false);
  int a,b; cin >> a >> b;
  int c,d; cin>> c >> d;
  for(int i = a; i < b; i++){
    arr[i] = true;
  }
  for(int i = c; i < d; i++){
    arr[i] = true;
  }
  int ans = 0;
  for(bool i: arr){
    if(i){
      ans++;
    }
  }
  cout << ans;
}
