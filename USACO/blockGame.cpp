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

vector<int> check(string a, string b){
  vector<int> stringone(26,0);
  vector<int> stringtwo(26,0);

  map<char,int> m;
  m['a'] = 0;
  m['b'] = 1;
  m['c'] = 2;
  m['d'] = 3;
  m['e'] = 4;
  m['f'] = 5;
  m['g'] = 6;
  m['h'] = 7;
  m['i'] = 8;
  m['j'] = 9;
  m['k'] = 10;
  m['l'] = 11;
  m['m'] = 12;
  m['n'] = 13;
  m['o'] = 14;
  m['p'] = 15;
  m['q'] = 16;
  m['r'] = 17;
  m['s'] = 18;
  m['t'] = 19;
  m['u'] = 20;
  m['v'] = 21;
  m['w'] = 22;
  m['x'] = 23;
  m['y'] = 24;
  m['z'] = 25;

  for(char i: a){
    stringone[m[i]]++;
  }
  for(char i: b){
    stringtwo[m[i]]++;
  }

  vector<int> ans(26,0);
  for(int i = 0; i < 26; i++){
    ans[i] = max(stringone[i],stringtwo[i]);
  }
  return ans;
}

int32_t main(){

  freopen("blocks.in","r",stdin);
  freopen("blocks.out", "w", stdout);

  int n; cin >> n;
  vector<pair<string,string>> words;
  for(int i = 0; i < n; i++){
    string a, b;
    cin >> a >> b;
    words.push_back(make_pair(a,b));
  }

  vector<int> ans(26,0);

  for(auto k: words){
    vector<int> compare = check(k.first, k.second);
    for(int i = 0; i < 26; i++){
      ans[i] += compare[i];
    }
  }

  for(int i: ans){
    cout << i << endl; 
  }





}
