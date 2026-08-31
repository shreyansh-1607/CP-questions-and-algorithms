
// This is my code for coordinate compression for eg.[1, 10000, 20000,4555,4] turns to [0,3,4,2,1] 
//  can access the main using m[a[i]] also
vector<int> a(n);
// read the vector
vector<int> b = a;
sort(b.begin(), b.end());
b.erase(unique(b.begin(), b.end()), b.end());

map<int, int> m;
for (int i = 0; i < n; i++) {
    m[b[i]] = i;
}
for (int i = 0; i < n; i++) {
    a[i] = m[a[i]];
}
