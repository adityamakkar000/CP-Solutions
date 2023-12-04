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

int calculate_y(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4){
  if(x3 <= x1 && x4 >= x2){

    if(y1 >= y3 && y2 <= y4){
      return y2-y1;
    }
    else{
      if(y3 <= y1 && y4 >= y2){
        return 0;
      }
      else{
        if(y2-y4 < 0){
          return y3-y1;
        }
        else{
          return y2-y4;
        }
      }
    }
  }
  else{
    return y2-y1;
  }
}
int calculate_x(int x1, int x2, int x3, int x4, int y1, int y2, int y3, int y4){
   if(y3 <= y1 && y4 >= y2){

    if(x1 >= x3 && x2 <= x4){
      return x2-x1;
    }
    else{
      if(x3 <= x1 && x4 >= x2){
        return 0;
      }
      else{
        if(x2-x4 < 0){
          return x3-x1;
        }
        else{
          return x2-x4;
        }
      }
    }
  }
  else{
    return x2-x1;
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

  if(intersect(s1,s2)){

    int x,y;

    y = calculate_y(s1[0],s1[2],s2[0],s2[2], s1[1],s1[3],s2[1],s2[3]);
    x = calculate_x(s1[0],s1[2],s2[0],s2[2], s1[1],s1[3],s2[1],s2[3]);

    cout << x * y << endl;
  }
  else{
    int ans = (s1[2]-s1[0])*(s1[3]-s1[1]);
    cout << ans << endl;
  }


}
