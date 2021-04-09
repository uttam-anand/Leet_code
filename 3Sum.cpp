class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set <vector<int>> s;
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=(n-3);i++){
            int a=i+1,b=n-1,val;
            while(a<b){
                val=nums[i]+nums[a]+nums[b];
                if(val==0){
                    s.insert({nums[i],nums[a],nums[b]});
                    a++; b--;
                }
                else if(val<0) 
                    a++;
                else         
                    b--;
            }
        }
        auto it=s.begin();
        while(it!=s.end()){
            v.push_back(*it);  
            it++;
        }
        return v;
    }
};
