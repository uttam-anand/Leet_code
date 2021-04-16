class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        nums1.reserve(m+n);
        for ( vector < int >:: iterator it = nums2.begin() ;it != nums2.end() ; it++)
            nums1.push_back(*it);
        sort(nums1.begin() , nums1.end());
    }
};
