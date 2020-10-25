class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        res=[]
        for i in range(len(l)):
            ans=[]
            ok=True
            for j in range(l[i],r[i]+1):
                ans.append(nums[j])
            ans.sort()
            for j in range(1,len(ans)):
                if ans[j]-ans[j-1]!=ans[1]-ans[0]:
                    ok=False
            res.append(ok)
        return res
