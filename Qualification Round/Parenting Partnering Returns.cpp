//Greedy
#include <bits/stdc++.h>
using namespace std;
#define _fast_ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
string solve()
{
	int n; cin >> n;
	vector<pair<pair<int,int>,int> > act(n);
	for(int i=0; i<n; i++)
	{
	    cin >> act[i].first.first >> act[i].first.second;
	    act[i].second = i;
	    
	}
	sort(act.begin(),act.end());
	int jt = 0, ct = 0;
	string ans(n,'?');
	for(auto i : act)
	{
		if(jt<=i.first.first)
		{
			jt = i.first.second;
			ans[i.second] = 'C';
		}
		else if(ct<=i.first.first)
		{
			ct = i.first.second;
			ans[i.second] = 'J';
		}
		else
		{
			return "IMPOSSIBLE";
		}
	}
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
