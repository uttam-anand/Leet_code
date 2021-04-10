class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        if(n==0)
            return "";
        string prefix="";
        for(int i=0,j=0;i<strs[0].size() && j<strs[n-1].size(); i++,j++)
        {
            if(strs[0][i]==strs[n-1][j])
            {
                prefix+=strs[0][i];
            }
            else
            {
                break;
            }
        }
        return prefix;  
    }
};
