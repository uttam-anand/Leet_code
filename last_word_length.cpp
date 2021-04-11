  class Solution {
public:
    int lengthOfLastWord(string s) {
       int count =0 ;
       int prev_count =count;
       for(char i : s)
       {
           if(i == ' ')
               count =0;
           else 
           {
               count++;
               prev_count= count;
           }
       }
       return prev_count; 
    }
};
