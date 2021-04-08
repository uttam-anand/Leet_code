#include<bits/stdc++.h>
using namespace std;
void IO()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int longestUniqueSubsttr(string str)
{
	int n = str.size();
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		vector<bool>visited(256);
		for(int j = i ; j < n ;j++)
		{
			if(visited[str[j]]==true)
				break;
			else 
			{
				res=max(res, j-i+1);
				visited[str[j]]=true;
			}

		}
		visited[str[i]]=false;
	}
	return res;
}

int main()
{
	IO();
	string str = "Hello";
	int len = longestUniqueSubsttr(str);
	cout <<len;
	return 0;
}
