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

int area(int bl_x, int bl_y, int tr_x, int tr_y) {
	long long length = tr_y - bl_y;
	long long width = tr_x - bl_x;
	return length * width;
}

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

int inter_area(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

	return ((min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x)) *
	        (min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y)));
}

int32_t main(){

    freopen("billboard.in","r",stdin);
    freopen("billboard.out", "w", stdout);

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    for(int i = 0; i < 4; i++){
      int a; cin >> a;
      v1.push_back(a);
    }
     for(int i = 0; i < 4; i++){
      int a; cin >> a;
      v2.push_back(a);
    }
     for(int i = 0; i < 4; i++){
      int a; cin >> a;
      v3.push_back(a);
    }

    int ans = area(v1[0],v1[1],v1[2],v1[3]) + area(v2[0],v2[1],v2[2],v2[3]);

    int overlap = 0;

    if(intersect(v1,v3)){
      overlap += inter_area(v1,v3);
    }
    if(intersect(v2,v3)){
      overlap += inter_area(v2,v3);
    }

    ans -= overlap;
    cout << ans;


}
