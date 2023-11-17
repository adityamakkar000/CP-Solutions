class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        final_list = []

        while list1 and list2:
            if list1.val < list2.val:
                final_list.append(list1.val)
                list1 = list1.next
            else:
                final_list.append(list2.val)
                list2 = list2.next

        while list1:
            final_list.append(list1.val)
            list1 = list1.next

        while list2:
            final_list.append(list2.val)
            list2 = list2.next

        final_list = final_list[::-1]
        head = ListNode(final_list.pop())
        curr = head

        while final_list:
            curr.next = ListNode(final_list.pop())
            curr = curr.next

        return head
