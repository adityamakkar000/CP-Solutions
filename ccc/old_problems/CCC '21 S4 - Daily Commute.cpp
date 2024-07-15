#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

typedef long long ll;

int n, w, d;

vector<int> lines[200001];
int arr[200001];
queue<int> q;

int main(){

    int INF = 1e9;
    cin >> n >> w >> d;

    vector<int> dis(n + 1, INF);
    for(int i = 0; i < w; i++){
        int a, b; cin >> a >> b;
        lines[b].push_back(a);
    }
    vector<int> order;
    for(int i = 0; i < n; i++){
        int b; cin >> b;
        order.push_back(b);
        arr[b] = i;
    }

    dis[n] = 0;
    q.push(n);
    while(!q.empty()){
        int curr = q.front(); q.pop();
        for(auto u: lines[curr]){
            if(dis[u] == INF){
                dis[u] = dis[curr] + 1;
                q.push(u);
            }
        }
    }


    multiset<int> times;

    for(int l = 1; l <= n; l++){
            //cout << dis[l] << " " << arr[l] << endl;
            times.insert(dis[l] + arr[l]);
    }

    for(int i = 0; i < d; i++){
        int o,t; cin >> o >> t;
        o--; t--;



        times.erase(times.find(dis[order[o]] + arr[order[o]]));
        times.erase(times.find(dis[order[t]] + arr[order[t]]));
        int temp = arr[order[o]];
        arr[order[o]] = t;
        arr[order[t]] = temp;

        temp = order[o];
        order[o] = order[t];
        order[t] = temp;

        times.insert(dis[order[o]] + arr[order[o]]);
        times.insert(dis[order[t]] + arr[order[t]]);

        cout << *times.begin() << endl;
    }
}
