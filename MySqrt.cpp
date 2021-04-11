class Solution {
public:
    int mySqrt(int x) {
       int l=0,r=x;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(mid && INT_MAX/mid < mid){
                r=mid-1;
                continue;
            }
            int sq= mid*mid;
            if(sq==x)
                return mid;
            else if(sq<x)
                l=mid+1;
            else
                r=mid-1;
        }
        return l-1;
    }
    
};
