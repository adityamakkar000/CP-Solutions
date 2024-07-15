#include <bits/stdc++.h>

using namespace std;

bool verify(vector<int> &a, vector<int>&b, int n){

    for(int i = 0; i < n; i++){
      if(a[i] != b[i]) return false;
    }
    return true;
}




int main(){
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(auto &k: a){
    cin >> k;
  }
  for(auto &k: b){
    cin >> k;
  }
  bool check = verify(a,b,n);
  if(check){
    cout << "YES" << endl;
    cout << 0 << endl;
    return 0;
  }
  set<int> s;
  map<int, pair<int,int>> v;
  int l = 0; int r = 0;
  while(l < n){
    int one = b[l];
    int two = b[r];
    if(one == two){
      if(r == n-1){
        s.insert(one);
        v[one]= {l,r};
        break;
      }
      else{
        r++;
      }
    }
    if(one != two){
      s.insert(one);
      v[one]= {l,r-1};
      l = r;
      if(r == (n-1)){
        s.insert(two);
        v[two]= {l,r};
      }else{
        r++;
      }

    }
  }

  vector<pair<char, pair<int,int>>> moves;
  for(int i = 0; i < n; i++){
    if(s.count(a[i]) == 1){
      if(i < v[a[i]].second){
        pair<char, pair<int,int>> move2 = {'R',{i, v[a[i]].second}};
        moves.push_back(move2);
      }
      else if(i > v[a[i]].first){
         pair<char, pair<int,int>> move1 = {'L',{v[a[i]].first,i}};
         moves.push_back(move1);
      }
      s.erase(a[i]);
    }
  }

  if(s.size() != 0){
    cout << "NO" << endl;
    return 0;
  }

  for(auto k: moves){
    for(auto j: moves){
      
    }

  }

  cout << "YES" << endl;
  cout << moves.size() << endl;
  for(auto k: moves){
    cout << k.first << " " << k.second.first << " " << k.second.second << endl;
  }

}
