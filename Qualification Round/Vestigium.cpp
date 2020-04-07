//Brute Force
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define _fast_ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
vector<int> solve()
{
    int n; cin >> n;
    vector<vector<int> > mat(n, vector<int>(n));
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> mat[i][j];
    int k=0,r=0,c=0,flag=0;
    for(int i=0; i<n; i++) k += mat[i][i];
    for(int i=0; i<n; i++) 
    {
        set<int> s;
        for(int j=0; j<n; j++)
        {
            if(s.find(mat[i][j])!=s.end()) flag = 1;
            s.insert(mat[i][j]);
        }
        if(flag) r+=1;
        flag = 0;
    }
    flag = 0;
    for(int i=0; i<n; i++)
    {
        set<int> s;
        for(int j=0; j<n; j++)
        {
            if(s.find(mat[j][i])!=s.end()) flag = 1;
            s.insert(mat[j][i]);
        }
        if(flag) c+=1;
        flag = 0;
    }
    return {k,r,c};
}



int32_t main()
{
    _fast_;
    int t; cin >> t;
    int tc = 0;
    while(t--)
    {
        vector<int> n = solve();
        cout << "Case #" << (++tc) << ": " << n[0] << " " << n[1] << " " << n[2] << endl;
    }
    return 0;
}
