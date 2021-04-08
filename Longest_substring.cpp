#include<bits/stdc++.h>
using namespace std;
void IO()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}
				// The complexity is O(N^2)
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

 					//Complexity is O(N+D)
int lengthOfLongestSubstring(string s) {
       int res=0;
	int n = s.size();
	vector<int> lastIndex(256,-1);
	int j=0;
	for (int i = 0; i < n; ++i)
	{
		j=max(j,lastIndex[s[i]]+1);
		res = max(res,i-j+1);
		lastIndex[s[i]]=i;
	}
	return res;
    
    }
