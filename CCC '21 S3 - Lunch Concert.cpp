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

long long get_time(long long friends[][3], int n, int p){

    long long  walk;
    long long total_time = 0;

    for(int i = 0; i< n; i++){

        walk = abs(p -friends[i][0])-friends[i][2];
        //cout << walk << endl;
        if(walk > 0){

            total_time += walk*friends[i][1];
        }
    }

    return total_time;


}


int main(){

    int n; cin >> n;

    long long high = 0, low = LONG_MAX;

    long long friends[n][3];

    for(int i = 0; i < n; i++){

        cin >> friends[i][0] >> friends[i][1] >> friends[i][2];
        if(friends[i][0] > high){

            high = friends[i][0];
        }

        if(friends[i][0] < low){

            low = friends[i][0];
        }

    }


    long long mid = 0;
    long long time = 0;

    while(low <= high){

        mid = (low + high)/2;
        //cout << low << " " << high << " " << mid << endl;
        time = get_time(friends,n,mid);
        long long timeR = get_time(friends,n,mid+1);
        long long timeL = get_time(friends,n,mid-1);

        //cout << timeL << " " << time << " " << timeR << endl;

        if(time < timeR && time < timeL){

            break;

        }

        if(time == timeR || time == timeL){


            break;
        }

        if(time < timeR){

            high = mid - 1;
        }

        else if(time < timeL){

            low = mid+1;
        }

    }

    cout << time;


}
