#include <bits/stdc++.h>

using namespace std;

void solve(int m){
    string a; cin >> a;
    char l[26] = {0};
    vector<char> c(a.begin(), a.end());
    for(char k: c){
      l[k-'a']++;
    }
    if(l[c[0]-'a'] > 1){
      for(int k = 0; k < m; k++){
            if(k % 2 == 0){
              if(l[c[k]-'a'] == 1){
                cout << "F" << endl;
                return;
              }
            }
            if(k % 2 == 1){
              if(l[c[k]-'a'] > 1){
                cout << "F" << endl;
                return;
              }
            }

          }
      cout << "T" << endl;
    }
    else{
      for(int k = 0; k < m; k++){
        if(k % 2 == 0){
          if(l[c[k]-'a'] > 1){
            cout << "F" << endl;
            return;
          }
        }
        if(k % 2 == 1){
          if(l[c[k]-'a'] == 1){
            cout << "F" << endl;
            return;
          }
        }

      }
      cout << "T" << endl;
    }


}

int main(){
  int n,m; cin >> n >> m;

  while(n--){
    solve(m);
  }
}
