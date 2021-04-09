class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size() < 4) return ans;
        set<vector< int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0 ; i < nums.size()-3 ; i++)
        {
            for(int j=i+1 ;j <nums.size()-2 ; j++)
            {
            int l=j+1, r=nums.size()-1;
            while(l<r)
            {
                if(nums[i]+nums[j]+nums[l]+nums[r]==target)
                {
                    s.insert({nums[i],nums[j],nums[l],nums[r]});
                    l++;r--;
                }
                else if(nums[i]+nums[j]+nums[l]+nums[r] > target)  r--;
                else l++;
            }
            }
        }
        auto it= s.begin();
        while(it != s.end())
        {
            ans.push_back(*it);
            it++;
        }
        return ans;
    }
};
