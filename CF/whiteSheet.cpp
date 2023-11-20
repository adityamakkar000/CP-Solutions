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

int distance(int x1, int y1, int x2, int y2){

    return pow((x2-x1),2) + pow((y2-y1),2);

}

int max_distance(vector<int> x, vector<int> y, int n){

    int m = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            m = max(m, distance(x[i],y[i],x[j],y[j]));
        }
    }

    return m;
}


int32_t main(){
    int n; cin >> n;
    vector<int> x;
    vector<int> y;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        x.push_back(a);
    }

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        y.push_back(a);
    }

    int ans = max_distance(x,y,n);
    cout << ans << endl;
}
