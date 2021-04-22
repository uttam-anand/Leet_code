class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num = 0 , n = columnTitle.size();
        for ( int i =0 ;i < n ; i++)
        num += pow (26 , n-i-1) * (1+(columnTitle[i]-'A'));
        
        return num;
   }
    
};
