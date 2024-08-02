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

vector<vector<char>> operations;



void solve(vector<int> &v){

  set<int> possible;
  sort(v.begin(), v.end());


  do{

    int a = v[0], b = v[1], c = v[2], d = v[3];


    for(auto i: operations){
      int current_sum = 0;
      char op1 = i[0], op2 = i[1], op3 = i[2];

      if(op1 == '+'){
        current_sum += (a + b);
      }
      else if(op1 == '-'){
        current_sum += (a-b);
      }
      else if (op1 == '*'){
        current_sum += (a * b);
      }
      else if (op1 == '/'){
        if(b!= 0 && a % b == 0){
          current_sum += (a/b);
        }
        else{
          continue;
        }
      }

      if(op2 == '+'){
        current_sum += (c);
      }
      else if(op2 == '-'){
        current_sum -= c;
      }
      else if (op2 == '*'){
        current_sum *= c;
      }
      else if (op2 == '/'){
        if(c != 0 && current_sum % c == 0){
          current_sum /=c ;
        }
        else{
          continue;
        }
      }


      if(op3 == '+'){
        current_sum += (d);
      }
      else if(op3 == '-'){
        current_sum -= d;
      }
      else if (op3 == '*'){
        current_sum *= d;
      }
      else if (op3 == '/'){
        if(d != 0 && current_sum % d == 0){
          current_sum /= d ;
        }
        else{
          continue;
        }
      }
      possible.insert(current_sum);
    }

    for(auto i: operations){
      int current_sum = 0;
      int current_sum2 = 0;
      char op1 = i[0], op2 = i[1], op3 = i[2];

      if(op1 == '+'){
        current_sum += (a + b);
      }
      else if(op1 == '-'){
        current_sum += (a-b);
      }
      else if (op1 == '*'){
        current_sum += (a * b);
      }
      else if (op1 == '/'){
        if(b != 0 && a % b == 0){
          current_sum += (a/b);
        }
        else{
          continue;
        }
      }

      if(op2 == '+'){
        current_sum2 += (c + d);
      }
      else if(op2 == '-'){
        current_sum2 += (c-d);
      }
      else if (op2 == '*'){
        current_sum2 += (c*d);
      }
      else if (op2 == '/'){
        if(d!= 0 && c % d == 0){
          current_sum2 += (c/d) ;
        }
        else{
          continue;
        }
      }


      if(op3 == '+'){
        current_sum += current_sum2;
      }
      else if(op3 == '-'){
        current_sum -= current_sum2;
      }
      else if (op3 == '*'){
        current_sum *= current_sum2;
      }
      else if (op3 == '/'){
        if(current_sum2 != 0 && current_sum % current_sum2 == 0){
          current_sum /= current_sum2 ;
        }
        else{
          continue;
        }
      }
      possible.insert(current_sum);
    }


  } while(next_permutation(v.begin(), v.end()));


  auto it = prev(possible.upper_bound(24), 1);
  cout << *it << endl;
}


void search(vector<char> ops, vector<char> current){

  if(current.size() == 3){
    operations.push_back(current);
    return;
  }

  for(char i: ops){
    current.push_back(i);
    search(ops, current);
    current.pop_back();
  }
}

int32_t main(){

  int n; cin >> n;
  vector<vector<int>> v;

  for(int i = 0; i < n; i++){
    vector<int> temp ;
    for(int k = 0; k < 4; k++){
      int a; cin >> a;
      temp.push_back(a);
    }
    v.push_back(temp);
  }

  vector<char> ops = {'+', '-', '*', '/'};
  vector<char> current;
  search(ops, current) ;

  for(auto i: v){
    solve(i);
  }

}