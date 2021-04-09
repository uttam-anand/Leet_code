class Solution {
public:
    int fourSumCount(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        map<int,int> m;
        for(auto x : a){
            for(auto y : b){
                m[x+y]++;
            }
        }
        int ans=0;
        for(auto x : c){
            for(auto y : d){
                if(m.find(-(x+y))!=m.end()){
                    ans+=m[-(x+y)];
                }
            }
        }
        return ans;
    }
};
