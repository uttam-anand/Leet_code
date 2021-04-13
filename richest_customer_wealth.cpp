class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int curr = 0 , ans = INT_MIN;
        for ( int i =0 ; i < accounts.size() ; i++ )
        {
            curr =  accumulate(accounts[i].begin() ,accounts[i].end() ,0);
            ans = max(curr , ans);
        }
    return ans;
    }
};
