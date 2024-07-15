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

int MAX_DIGIT(int n){
    string s = to_string(n);
    int l = s.size();
    vector<char> v(s.begin(),s.end());
    set<int>digits;
    for(char i: v){
        digits.insert(i-'0');
    }
    return *prev(digits.end());
}

int main(){
    int n; cin >> n;
    vector<int> dp(n+1, 0);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        dp[i] = dp[i-MAX_DIGIT(i)] + 1;
    }
    cout << dp[n];
}
