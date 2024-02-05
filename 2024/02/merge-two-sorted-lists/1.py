# https://leetcode.cn/problems/merge-two-sorted-lists/
from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 is None and list2 is None:
            return list1
        if list1 is None:
            return list2
        if list2 is None:
            return list1
        head = p1 = list1 if list1.val < list2.val else list2
        p2 = list2 if p1 == list1 else list1
        while True:
            if p2 is None or p1 is None:
                break

            if (p1.next is None or p2.val < p1.next.val) and p2.val >= p1.val:
                # 合并进去
                temp1 = p1.next
                p1.next = p2
                p2 = p2.next
                p1 = p1.next
                p1.next = temp1
            else:
                p1 = p1.next
        return head
