class Solution:
    def slowestKey(self, releaseTimes: List[int], keysPressed: str) -> str:
        lst=[]
        for i in range(len(releaseTimes)):
            if i==0:
                lst.append(releaseTimes[0])
            else:
                lst.append(releaseTimes[i]-releaseTimes[i-1])
        x=0
        for i in range(len(lst)):
            if(lst[i]>lst[x]):
                x=i
            elif (lst[i]==lst[x]):
                if ord(keysPressed[i])>=ord(keysPressed[x]):
                    x=i
        c=keysPressed[x]
        return c
            
        
