#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

#define MAXN 202020
#define MOD 1000000007
#define int long long




void solve(){


    float x,y, d;
    cin >> x >> y >> d;


    int current_x = (int) ceil(x/d);
    int current_y = (int) ceil(y/d);


    int ans = 0;

    if(current_x >=  y){
        ans = 2 * current_x - 1;
    }
    else{
        ans = 2 * current_y;
    }
    cout << ans << endl;

}


int32_t main(){

    int t; cin >> t;
    while(t--){
        solve();
    }
}
