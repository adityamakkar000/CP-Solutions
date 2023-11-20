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

bool intersect(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

	if (bl_a_x >= tr_b_x || tr_a_x <= bl_b_x || bl_a_y >= tr_b_y ||
	    tr_a_y <= bl_b_y) {
		return false;
	} else {
		return true;
	}
}

int32_t main()
{

  freopen("billboard.in", "r", stdin);
  freopen("billboard.out", "w", stdout);

  vector<int> s1;
  for(int i = 0; i < 4; i++){
    int a; cin >> a;
    s1.push_back(a);
  }
  vector<int> s2;
  for(int i = 0; i < 4; i++){
    int a; cin >> a;
    s2.push_back(a);
  }


  int height = s1[3] - s2[3];
  int width = s2[0] - s1[0];

  int area;

  if(intersect(s1,s2)){

    bool  h, w;

    if(height > 0) h = true;
    else h = false;

    if(width > 0) w = true;
    else w = false;

    if(h && w){
      area = (s1[3]-s1[1])*(s1[2] - s1[0]);
    }
    if(h && !w){
      area = height*(s1[2] - s1[0]);
    }
    if(!h && w){
      area = width * (s1[3]-s1[1]);
    }
    if(!h && !w){
      area = 0;
    }

  } else{
    area =  (s1[3]-s1[1])*(s1[2] - s1[0]);
  }


  cout << area << endl;


}
