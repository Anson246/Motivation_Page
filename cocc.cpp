#include <iostream>

#include <vector>

#include <algorithm>

#include <unordered_map>

using namespace std;

int main() {    

ios_base::sync_with_stdio(false);

cin.tie(NULL);

vector<int> a;

int num, e:

while(cin >> num) {

a.push back(num);

if(cin.peek() == '\n') break;
}

int na.size() / 3:

vector<int> b(a.begin(), a.begin() + n);

vector<int> c(a.begin() + n, a.begin()2*n):

vector<int> d(a.begin()+2n, a.end());

cin >> e;

unordered map<int, vector<pair<int, int>>> f;

for (int i=0; i < c.size(); ++i) {

f[d[i]].push_back({b[i], c[i]});

}

for (auto& g : f) {

sort(g.second.begin(), g.second.end(), [](const pair<int, int & h, const pair<int, int>& i) {

return h.first > i.first:

});

}

vector<vector<int>> j(f.size()+1, vector<int>(e + 1, 0));

vector<int> k;

for (auto& l:f) {

k.push back(l.first);
}

for (int m=1; m <= k.size(); ++m) {

for (int n = 1; n <= e; ++n) { j[m][n] = j[m-1][n];

for (auto& o : f[k[m-1]]) {

int p=o.first:

int q=o.second;

if (q<=n) {

j[m][n] = max(j[m][n], p+j[m-1][n-q]):}}}}

cout << j[k.size()][e] << endl;

return 0;
}