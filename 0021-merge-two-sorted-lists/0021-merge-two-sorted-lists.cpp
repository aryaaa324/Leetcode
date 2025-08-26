/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Step 1: Create a dummy node to start our new list
        ListNode dummy;
        
        // Step 2: Create a 'tail' pointer to keep track of the end of the merged list
        ListNode* tail = &dummy;

        // Step 3: Compare nodes while both lists are not empty
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                // If list1's value is smaller or equal, attach list1 node to tail
                tail->next = list1;
                // Move list1 forward
                list1 = list1->next;
            } else {
                // Otherwise, attach list2 node to tail
                tail->next = list2;
                // Move list2 forward
                list2 = list2->next;
            }
            // Move the tail forward to the new last node
            tail = tail->next;
        }

        // Step 4: If one list is not finished, attach it directly
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // Step 5: Return the merged list (dummy.next skips the dummy node itself)
        return dummy.next;
    }
};