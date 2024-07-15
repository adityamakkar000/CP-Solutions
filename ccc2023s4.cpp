#include<bits/stdc++.h>

using namespace std;

#define int long long

struct DSU {

	vector<int> e;
	DSU(int N) : e(N, -1) {}
	int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
	bool connected(int a, int b) { return get(a) == get(b); }
	int size(int x) { return -e[get(x)]; }
	bool unite(int x, int y) {

		x = get(x), y = get(y);
		if (x == y) { return false; }
		if (e[x] > e[y]) { swap(x, y); }
		e[x] += e[y];
		e[y] = x;

		return true;
	}

};


template <class T> T kruskal(int N, vector<pair<T, pair<int, int>>> edges) {

	sort(edges.begin(), edges.end());

	T ans = 0;
	DSU D(N + 1);
	for (pair<T, pair<int, int>> &e : edges) {
		if (D.unite(e.second.first, e.second.second)) { ans += e.first; }

	}
	return (ans);

}

int32_t main(){


  int n,m; cin >> n >> m;
  vector<pair<int, pair<int, int>>> edges;
  for(int i = 0; i < m; i++){
    int a, b, c,d; cin >> a >> b >> c >> d;
    edges.push_back({d, {a, b}});
  }
  cout << kruskal(n, edges) << endl;

}
