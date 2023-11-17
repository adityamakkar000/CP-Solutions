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



int main(){

    vector<int> v(21,0);

    v[1] = 1;

    for(int i = 2; i < 21; i++){
        if(i%2 == 0){
            v[i] = v[i-1] + 2;
        }
        else{
            v[i] = v[i-1] + 1;
        }
    }

    cout << v[20] << endl;


}
