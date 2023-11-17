#include <string.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
// #define int long long

bool check(vector<string> a, vector<string> b){

  if(a.size() != b.size()){
    return false;
  } else{
    for(int i = 0; i < a.size(); i++){
      if(a[i] != b[i]) return false;
    }
  }
  return true;

}

int convert(string a) {
    int ans = stoi(a.substr(1,a.size()));

    if (a[0] == '+') {
        return ans;
    } else {
        return -ans;
    }
}


vector<string> highest(map<string,int> m){
  int ans = 0;
  vector<string> v;
  for(auto k: m){
    ans = max(ans, k.second);
  }

  for(auto k: m){
    if(k.second == ans){
      v.push_back(k.first);
    }
  }
  return v;
}

int main(){

  freopen("measurement.in","r",stdin);
  freopen("measurement.out", "w", stdout);


  int n; cin >> n;
  vector<tuple<int, string, string>> days;

  for(int i = 0; i < n; i++){
    int a;
    string b,c;
    cin >> a >> b >> c;
    days.push_back(make_tuple(a,b,c));
  }

  sort(days.begin(),days.end());

  map<string, int> m;

  m["Bessie"] = 7;
  m["Elsie"] = 7;
  m["Mildred"] = 7;

  int change = 0;
  vector<string> displays = {"Bessie", "Elsie", "Mildred"};

  for(auto k: days){
    int day = get<0>(k);
    int increment = convert(get<2>(k));
    string cow = get<1>(k);

    m[cow] += increment;
    vector<string> new_displays = highest(m);

    // for(auto o: new_displays){
    //   cout << o << " ";
    // }

    // cout << endl;

    bool s = check(new_displays, displays);

    if(!s){
      change++;
      displays = new_displays;
    }

  }
  cout << change << endl;



}

