class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size() ;
        int l = 2*k;
        for ( int i=0 ; i<s.size(); i+=l )
        {
            if (n < k)
                reverse(s.begin()+i , s.end());
            else 
            {
                reverse(s.begin()+i , s.begin()+i+k);
                n -= l ;
            }
        }
        return s;
    }
};
