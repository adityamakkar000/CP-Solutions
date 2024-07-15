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

  vector<pair<int, pair<int,int>>> v;
  int l = 0; int r = 0;
  while(l < n){
    int one = b[l];
    int two = b[r];
    if(one == two){
      if(r == n-1){
        v.push_back({one, {l,r}});
        break;
      }
      else{
        r++;
      }
    }
    if(one != two){
      v.push_back({one,{l,r-1}});
      l = r;
      if(r == (n-1)){
        v.push_back({two,{l,r}});
      }else{
        r++;
      }

    }
  }
  vector<pair<char, pair<int,int>>> moves;
  for(auto k: v){
    vector<int> subarray(a.begin()+k.second.first, a.begin() + k.second.second + 1);
    int index = -1;
    for(int i = 0; i < k.second.second - k.second.first + 1; i++){
      if(subarray[i] == k.first) index = i;
    }
    if(index == -1) {
      cout << "NO" << endl;
      return 0;
    }
    if(index != 0){
       pair<char, pair<int,int>> move1 = {'L',{k.second.first,index+k.second.first}};
       moves.push_back(move1);
    }
    if(index != k.second.second){
      pair<char, pair<int,int>> move2 = {'R',{index+k.second.first, k.second.second}};
      moves.push_back(move2);
    }
  }

  cout << "YES" << endl;
  cout << moves.size() << endl; 
  for(auto k: moves){
    cout << k.first << " " << k.second.first << " " << k.second.second << endl;
  }

}
