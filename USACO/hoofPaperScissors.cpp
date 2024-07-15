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
  freopen("hps.in","r",stdin);
  freopen("hps.out", "w", stdout);

  int n; cin >> n;
  vector<int> h(n+1,0),p(n+1,0),s(n+1,0);
  for(int i = 0; i < n; i++){
    char a; cin >> a;
    p[i+1] = p[i];
    h[i+1] = h[i];
    s[i+1] = s[i];
    if(a == 'P'){
      p[i+1]++;
    }
    else if(a == 'S'){
      s[i+1]++;
    }
    else if(a == 'H'){
      h[i+1]++;
    }
  }

  int ans = 0;

  for(int i = 0; i < n; i++){
    int temp = max(h[i]-h[0],max(s[i]-s[0],p[i]-p[0]))
     + max(h[n]-h[i],max(s[n]-s[i],p[n]-p[i]));
    ans = max(ans,temp);
  }
  cout << ans << endl;

}
