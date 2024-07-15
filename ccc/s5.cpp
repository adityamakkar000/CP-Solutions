#include <bits/stdc++.h>

using namespace std;



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

  if(n == 5){
    cout << 5 << endl;
  }
  else{
    // case of 4



    int one = a[0], two = a[1], three = b[0], four = b[1];

    if(one == 0 && two == 0 && three == 0 & four == 0){
      cout << 0 << endl;
      return 0;
    }
    if(one == 0 && two == 0 && three == 0 & four != 0){
      cout << 1 << endl;
      return 0;
     }
    if(one == 0 && two == 0 && three != 0 & four == 0){
      cout << 1 << endl;
      return 0;
    }
    if(one == 0 && two != 0 && three == 0 & four == 0){
      cout << 1 << endl;
      return 0;
    }
    if(one != 0 && two == 0 && three == 0 & four == 0){
      cout << 1 << endl;
      return 0;
    }
    if(one == 0 && two == 0 && three != 0 & four != 0){
      if(one == two){
        cout << 2 << endl;
        return 0;
      }
      cout << 1 << endl;
      return 0;
    }
    if(one == 0 && two != 0 && three == 0 & four != 0){
      if(one == three){
        cout<< 2 << endl;
        return 0;
      }
      cout << 1 << endl;
      return 0;
     }
    if(one != 0 && two == 0 && three == 0 & four != 0){
      cout << 2 << endl;
      return 0;
     }
    if(one == 0 && two != 0 && three != 0 & four == 0){
      cout << 2 << endl;
      return 0;
    }
    if(one != 0 && two == 0 && three != 0 & four == 0){
      if(two == four){
        cout << 2 << endl;
        return 0;
      }
      cout << 1 << endl;
      return 0;
     }

    if(one != 0 && two != 0 && three == 0 & four == 0){
      if(four == three){
        cout <<2 << endl;
        return 0;
      }
      cout << 1 << endl;
      return 0;
     }

    if(one == 0 && two != 0 && three != 0 & four != 0){
      if(two == three == four){
        cout << 3 << endl;
        return 0;
      }
      if((three+four)/2 == two || (two + four)/2 == three){
        cout << 2 << endl;
        return 0;
      }
      cout << 1 << endl;
      return 0;
     }
    if(one != 0 && two == 0 && three != 0 & four != 0){
      if(one == three == four){
        cout << 3 << endl;
        return 0;
      }
      if((three+one)/2 == four || (three + four)/2 == one){
        cout << 2 << endl;
        return 0;
      }
      cout << 1 << endl;
      return 0;
    }
    if(one != 0 && two != 0 && three != 0 & four == 0){
      if(one == three == two){
        cout << 3 << endl;
        return 0;
      }
      if((two+one)/2 == three || (one + three)/2 == two){
        cout << 2 << endl;
        return 0;
      }
      cout << 1 << endl;
      return 0;

    }
    if(one != 0 && two != 0 && three == 0 & four != 0){
      if(one == two == four){
        cout << 3 << endl;
        return 0;
      }
      if((one+two)/2 == four || (two + four)/2 == one){
        cout << 2 << endl;
        return 0;
      }
      cout << 1 << endl;
      return 0;
    }

    if(one != 0 && two != 0 && three != 0 & four != 0){
      if(two == one && three == one && four == one){
        cout << 4 << endl;
        return 0;
      }

      // case of 3
      int x,y,z;
      x = (one + two)/2, y = three, z = four;
      if(x == y && y == z){
        cout << 3 << endl;
        return 0;
      }
      x = (two + four)/2, y = one, z = three;
      if(x == y && y == z){
        cout << 3 << endl;
        return 0;
      }
      x = (three + four)/2, y = one, z = two;
      if(x == y && y == z){
        cout << 3 << endl;
        return 0;
      }
      x = (one  + three)/2, y = two, z = four;
      if(x == y && y == z){
        cout << 3 << endl;
        return 0;
      }
      //case of 2
      x = (one + two); y = (three + four);
      if(x == y){
        cout << 2 << endl;
        return 0;
      }
      x = (one + three); y = (two + four);
      if(x == y){
        cout << 2 << endl;
        return 0;
      }

      //case of 2 three
      x = (one + two + three)/3; y = (four);
      if(x == y){
        cout << 2 << endl;
        return 0;
      }
      x = (one + two + four)/3; y = three;
      if(x == y){
        cout << 2 << endl;
        return 0;
      }
      x = (two + four + three)/3; y = one;
      if(x == y){
        cout << 2 << endl;
        return 0;
      }
      x = (one + four + three)/3; y = two;
      if(x == y){
        cout << 2 << endl;
        return 0;
      }

      //case of 1

      cout << 1 << endl;
      return 0;
    }





  }
}
