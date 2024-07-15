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



int main(){

    int n; cin >> n;

    map<string, char> huffman;

    vector<char> v;

    int m = 0;

    for(int i = 0; i< n; i++){

        char a;
        string b;

        cin >> a >> b;

        m = max((int)b.size(),m);

        huffman[b] = a;
    }


    string x; cin >> x;

    int y = 1;

    int i = 0;

    while(i < x.size()){

        string c = x.substr(i,y);

        if(y > m){

            y = 1;
            i++;
        }

        if(int(huffman[c]) >= int('A')){

            v.push_back(huffman[c]);
            i += y;
            y = 1;
        }


        else{

            y++;
        }


    }


    for(char i: v){

        cout << i;
    }


}
