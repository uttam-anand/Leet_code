class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int diff=INT_MAX,ret;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=(n-3);i++){
            int l=i+1,r=n-1,curr;
            while(l<r){
                int curr=nums[i]+nums[l]+nums[r];
                if(curr-target == 0)
                      return curr;
                else if(curr-target > 0)
                {
                    if(diff > (curr - target))
                    {
                        diff=abs(curr - target);
                        ret =curr;
                    }
                    r--;
                }
               else{
              if(diff>abs(curr-target)){
                diff=abs(curr-target);
                ret= curr;
              }
              l++;
            }
            }
        }
        return ret;
    }
};
