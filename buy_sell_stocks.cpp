class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr = INT_MAX, res = 0 ;
        for ( int i=0.;i < prices.size() -1 ; i++)
        {
            curr = min(curr , prices[i]);
            res = max(res , prices[i+1]-curr);
        }
        return res;
    }
};
