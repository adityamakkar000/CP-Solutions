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

int median(set<int> s){
  int l = s.size();
  vector<int> elements;
  for(int i: s) elements.push_back(i);

  if(l % 2 == 0) return((elements[l/2] + elements[(l/2)-1])/2);
  else return(elements[(l+1)/2] - 1);
 }


int32_t main(){

  // freopen("balancing.in","r",stdin);
  // freopen("balancing.out", "w", stdout);

  int n, b; cin >> n >> b;

  set<int> x_axis, y_axis;
  vector<pair<int,int>> v;

  for(int i = 0; i < n; ++i){
    int a, c; cin >> a >> c;
    v.push_back(make_pair(a,c));
    x_axis.insert(a);
    y_axis.insert(c);
  }

  int x = median(x_axis);
  int y= median(y_axis);

  // cout << x << " " << y << endl;

  int q1 = 0, q2 = 0, q3 = 0, q4 = 0;

  for(auto k: v){
    if(k.first > x && k.second > y)q1++;
    else if(k.first > x && k.second < y) q4++;
    else if(k.first < x && k.second > y) q2++;
    else if(k .first < x && k.second < y) q3++;
  }

  cout << max(max(q1,q2),max(q3,q4)) << endl;







}
