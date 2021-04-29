class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<int , int> m;
        for (int i =0 ; i<s.size() ; i++)
            m[s[i]]++;
        
        bool odd = false;
        int ans = 0;
        
        for (auto itr : m)
        {
            if(itr.second % 2 == 0)
                ans += itr.second;
            
            else 
            {
                odd =true;
                ans += (itr.second -1);
            }
        }
        if(odd)
            ans++;
        return ans;
    }
};
