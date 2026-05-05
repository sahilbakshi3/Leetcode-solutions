# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: Optional[ListNode]
        """

        if not head or not head.next or k == 0:
            return head

        n = 1
        tail = head
        while tail.next:
            tail = tail.next
            n += 1

        tail.next = head

        k = k % n

        steps = n - k
        newTail = head
        for _ in range(steps - 1):
            newTail = newTail.next

        newHead = newTail.next
        newTail.next = None

        return newHead
        