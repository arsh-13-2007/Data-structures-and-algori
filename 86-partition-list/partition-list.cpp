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
    ListNode* partition(ListNode* head, int x) {

        ListNode* smallHead = NULL;
        ListNode* smallTail = NULL;

        ListNode* largeHead = NULL;
        ListNode* largeTail = NULL;

        ListNode* ptr = head;

        while(ptr != NULL) {

            if(ptr->val < x) {

                if(smallHead == NULL) {
                    smallHead = ptr;
                    smallTail = ptr;
                }
                else {
                    smallTail->next = ptr;
                    smallTail = ptr;
                }

            }
            else {

                if(largeHead == NULL) {
                    largeHead = ptr;
                    largeTail = ptr;
                }
                else {
                    largeTail->next = ptr;
                    largeTail = ptr;
                }
            }

            ptr = ptr->next;
        }
        if(smallHead == NULL) {
            return largeHead;
        }
        if(largeHead == NULL) {
            smallTail->next = NULL;
            return smallHead;
        }

        smallTail->next = largeHead;
        largeTail->next = NULL;

        return smallHead;
    }
};