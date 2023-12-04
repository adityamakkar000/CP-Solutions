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

int area(pair<int,int> p1, pair<int,int> p2, pair<int,int> p3){

  int area = abs((p1.first * p2.second + p2.first*p3.second + p3.first*p1.second)- (p1.second*p2.first + p2.second*p3.first + p3.second*p1.first));
  return area;
}

bool parrell(pair<int,int> p1, pair<int,int> p2, pair<int,int> p3){
  bool y = false; bool x = false;

  pair<int,int>v1,v2,v3;
  v1 = make_pair((p2.first - p1.first),(p2.second - p1.second));
  v2 = make_pair((p3.first - p2.first),(p3.second - p2.second));
  v3 = make_pair((p1.first - p3.first), (p1.second - p3.second));

  if(v1.second == 0 || v2.second == 0 || v3.second == 0) y = true;
  if(v1.first == 0|| v2.first == 0 || v3.first == 0) x = true;

  if(x && y) return true;
  else return false;

}

int32_t main(){

  freopen("triangles.in","r",stdin);
  freopen("triangles.out", "w", stdout);

  int n; cin >> n;
  vector<pair<int,int>> v;
  for(int i = 0; i < n; i++){
    int  a,b; cin >> a >> b;
    v.push_back(make_pair(a,b));
  }

  int ans  = 0;

  for(int i = 0; i < n - 2; i++){
    for(int j = i + 1; j < n-1; j++){
      for(int k = j + 1; k < n; k++){
        pair<int,int> p1 = v[i], p2 = v[j], p3 = v[k];
        if(area(p1,p2,p3) > ans){
          if(parrell(p1,p2,p3)) {
            ans  = area(p1,p2,p3);
          }
        }
      }
    }
  }

  cout << ans << endl;


}
