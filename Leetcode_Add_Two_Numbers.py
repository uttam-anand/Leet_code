# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        first_no = []
        second_no = []
        
        while l1 is not None:
            first_no.append(l1.val)
            l1 = l1.next
            
        while l2 is not None:
            second_no.append(l2.val)
            l2 = l2.next
        
        first_no.reverse()
        second_no.reverse()
        
        res1 = int("".join(map(str, first_no)))
        res2 = int("".join(map(str, second_no)))
        
        res = str(res1 + res2)
        l3 = None
        
        for i in res:
            data = int(i)
            new_node = ListNode(data)
            if not l3:
                l3 = new_node
            else:
                new_node.next = l3
                l3 = new_node
                
        return l3
