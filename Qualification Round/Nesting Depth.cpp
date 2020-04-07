#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
#define _fast_ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string solve()
{
	string s; cin >> s;
	string ans = "";
	int open = 0;
	for(int i=0; i<s.length(); i++)
	{
		int e = s[i]-'0';
		while(open < e){ ans+='('; open+=1;}
		while(open > e){ ans+=')'; open-=1;}
		ans+=s[i];
	}
	while(open--) ans+=')';
	return ans;
}

int32_t main()
{
	_fast_;
	int t; cin >> t;
	int tc = 0;
	while(t--)
	{
		string ans = solve();
		cout << "Case #" << (++tc) << ": " << ans << endl;
	}
	return 0;
}
