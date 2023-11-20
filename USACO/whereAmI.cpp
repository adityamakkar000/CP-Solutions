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


  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  
  int n; cin >> n;
  string a; cin >> a;

  for(int i = 1; i <= n; i++){
    unordered_set<string> c;
    bool test = false;
    for(int k = 0; k < n - i + 1; k++){
      string s = a.substr(k,i);
      if(c.count(s) == 1){
        test = true;
        break;
      } else {
        c.insert(s);
      }
    }
    if(!test){
      cout << i << endl;
      break;
    }
  }

}
