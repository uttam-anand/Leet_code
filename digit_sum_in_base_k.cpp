class Solution {
public:
    int sumBase(int n, int k) {
        int i =0;
        int sum =0 ;
        while(n)
        {
            sum += n%k;
            n= n/k;
        }
        return sum;
    }
};
