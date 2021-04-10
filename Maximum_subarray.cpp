class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr =0 , max =INT_MIN;
        for (int i= 0 ; i< nums.size() ; i++)
        {
            curr = curr + nums[i] ;
            if(max < curr)
                max= curr;
            if (curr < 0)
                curr =0;
        }
        return max;
    }
};
