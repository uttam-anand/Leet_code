class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin() , ::tolower);
        int l = 0, r = s.size()-1;
        while(l<r)
        {
            if(!isalnum(s[l]))
            {
                l++;
                continue;
            }
            if(!isalnum(s[r]))
            {
                r--;
                continue;
            }
            if(s[l] != s[r])
                return false;
            l++;r--;
        }
        return true;
    }
};
