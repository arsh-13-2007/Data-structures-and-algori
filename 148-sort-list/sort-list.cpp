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
    ListNode* merge(ListNode * left  , ListNode* right){
        ListNode dummy(0) ; 
        ListNode*  tail = &dummy ; 
         while (left != NULL && right != NULL) {
            if(left->val > right->val ){
                tail->next = right ;
                right = right->next ; 
            }
        else{
               tail->next = left ; 
               left = left->next ;}
        tail = tail->next;
        }
        if(left == NULL){
            tail->next = right ; 
        }
        else{
            tail->next = left ; 
        }
        return dummy.next ; 
        }
    ListNode* merge_sort(ListNode* head ){
        if(head == NULL || head->next == NULL){
            return head ; 
        }
        ListNode* slow = head  ; 
        ListNode* fast = head->next ; 
        while(fast != NULL && fast->next != NULL){
            slow = slow->next ; 
            fast = fast->next->next ; 
        } 
        ListNode* midnxt = slow->next ; 
        slow->next = NULL ; 
        ListNode* left  = merge_sort(head); 
        ListNode* right = merge_sort(midnxt);
        return merge(left , right ) ;
    }
    ListNode* sortList(ListNode* head) {
        return merge_sort(head) ; 
    }
};