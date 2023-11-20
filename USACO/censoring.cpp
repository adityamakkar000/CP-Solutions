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

  freopen("censor.in", "r", stdin);
  freopen("censor.out", "w", stdout);

  string s, t; cin >> s >> t;

  string n;

  for(int i = 0; i < s.size(); i++){
    n += s[i];
    if(n.size() > t.size() &&  n.substr(n.size()-t.size()) == t){
      n.resize(n.size() - t.size());
    }
  }

  cout << n;

}
