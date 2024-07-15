#include <iostream> 
#include <bits/stdc++.h> 

#define int long long 

using namespace std; 

int32_t main(){ 
	int n; int k; cin >> n >> k; 
	vector<int> v(n); 
	for(int &i: v){ 
		cin >> i; 
	} 

	map<int, int> m; 
	for(int i = 0; i < n; i++){ 
		m[v[i]] = i+1; 
	} 
	
	//for(auto i: m){ 
	//	cout << i.first << " " << i.second; 
	//	cout << endl; 
	//} 


	for(int i = 0; i < n; i++){ 
		int new_sum = k-v[i]; 
			
		for(int j = 0; j < n; j++){ 
			if(j != i){ 
				int index = m[new_sum - v[j]];  
				// cout << index << endl; 

				if(index > 0){ 
					
					cout << i+1 << " " << j+1 << " " << index << endl; 
					return 0; 
				} 
			} 
		} 
	} 
	cout << "IMPOSSIBLE" << endl; 
}

