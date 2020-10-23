#include<bits/stdc++.h>
using namespace std;

	vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;
    
    for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);
        
        if (it != imap.end()) 
            return vector<int> {i, it->second};
            
        imap[nums[i]] = i;
    }
}



/*
    vector<int> twoSum(vector<int>& nums, int target) {
        const int size = nums.size();
        vector<int> twoSums;
        for (int i = 0 ; i < size - 1; i++ )
            for (int j = i+1; j < size; j++)
                if(nums[i] + nums[j] == target)
                {
                    twoSums.push_back(i);
                    twoSums.push_back(j);
                    return twoSums;
                }
        return twoSums;
    }

*/



	/*
	    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
	*/
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	vector<int>nums;
	int n,a,target;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		nums.push_back(a);	
	}
	cin>>target;
	nums=two_sum(nums,target);
	cout<<nums[0]<<","<<nums[1];
	return 0;
}
