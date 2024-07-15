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
  freopen("taming.in","r",stdin);
  freopen("taming.out", "w", stdout);

  int n; cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    v.push_back(a);
  }
  bool valid = false;

  for(int i = 0;i < n; i++){
    if(i == 0){
      v[0] = 0;
    }
    else if(v[i] != -1){
      int temp = v[i]-1;
      int j = i-1;
      while(temp >= 0){
        if(v[j] != -1){
          if(v[j] != temp){
            valid = true;
            break;
          }
        }
        v[j] = temp;
        temp--;
        j--;
      }

    }
  }
  int ans1 = 0;
  int ans2 = 0;

  for(int i = 0; i < n; i++){
    if(v[i] == 0){
      ans1++;
      ans2++;
    }
    if(v[i] == -1){
      ans2++;
    }
  }
  if(valid){
    cout << -1 << endl;
  }
  else{
    cout << ans1 << " " << ans2 << endl;
  }
}
