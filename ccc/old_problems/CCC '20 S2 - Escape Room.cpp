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

int m,n;
int grid[1001][1001];
bool visted[1001][1001];
queue <pair<int,int>> q;
vector<pair<int,int>> v[10000001];

void bfs(pair<int,int> node){

    vector <pair<int,int>> s;
    int i = node.first, k = node.second;
    i--; k--;
    q.push(make_pair(i,k));
    visted[i][k] = true;

    while(!q.empty()){
        pair<int, int> p = q.front(); q.pop();
        int sum = (p.first+1)*(p.second+1);
        s = v[sum];
        for(pair<int,int> u: s){
            if(!visted[u.first][u.second]){
                int ni = u.first, nk = u.second;
                visted[ni][nk] = true;
                q.push(make_pair(ni,nk));
            }
        }
    }
}


int main(){

    cin >> m >> n;

    for(int i = 0; i < m; i++){
        for(int k = 0; k < n; k++){
            cin >> grid[i][k];
            v[grid[i][k]].push_back(make_pair(i,k));
        }
    }

    /*for(int i = 0; i < m; i++){
        for(int k = 0; k < n; k++){
            cout << grid[i][k] << " ";
        }
        cout << endl;
    }*/

    bfs(make_pair(m,n));
    if(visted[0][0]){
        cout << "yes";
    }else{
        cout << "no";
    }

}
