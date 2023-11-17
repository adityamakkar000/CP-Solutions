#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
// #define int long long

int32_t main(){

  freopen("shell.in","r",stdin);
  freopen("shell.out", "w", stdout);

  int n; cin >> n;
  vector<tuple<int,int,int>> v;
  vector<char> g;
  for(int i = 0; i < n; i++){
    int a,b,c; cin >> a >> b >> c;
    a--; b--; c--;
    v.push_back(make_tuple(a,b,c));
  }

  vector<char> shell = {'a','b','c'};

  for(int i = 0; i < n; i++){
    int swap1position = get<0>(v[i]);
    int swap2position  = get<1>(v[i]);

    char swap1 = shell[swap1position];
    char swap2 = shell[swap2position];

    shell[swap1position] = swap2;
    shell[swap2position] = swap1;

    g.push_back(shell[get<2>(v[i])]);
  }

  int ca = 0, cb = 0, cc = 0;

  for(char i: g){
    if(i == 'a') ca++;
    else if (i == 'b') cb++;
    else if(i == 'c') cc++;
  }

  cout << max(ca, max(cb,cc));

}
