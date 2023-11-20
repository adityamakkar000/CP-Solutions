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

    freopen("square.in","r",stdin);
    freopen("square.out", "w", stdout);

    vector<pair<int,int>> s1;
    vector<pair<int,int>> s2;

    for(int i = 0; i < 2; i++){
      int a, b; cin >> a >> b;
      s1.push_back(make_pair(a,b));
    }
     for(int i = 0; i < 2; i++){
      int a, b; cin >> a >> b;
      s2.push_back(make_pair(a,b));
    }

    int x_min, x_max,y_min,y_max;

    x_min = min(s1[0].first, s2[0].first);
    x_max = max(s1[1].first, s2[1].first);

    y_min = min(s1[0].second, s2[0].second);
    y_max = max(s1[1].second, s2[1].second);

    int width, height;

    width = x_max - x_min;
    height = y_max - y_min;

    cout << pow(max(width,height),2);

}
