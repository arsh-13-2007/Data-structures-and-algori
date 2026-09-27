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
        ListNode* ptr1 = left ;
        ListNode* ptr2 = right ; 
        ListNode* ptr3;
        if(ptr1->val > ptr2->val ){
            ptr3 = new ListNode(ptr2->val) ; 
            ptr2 = ptr2->next ; 
        }
        else{
            ptr3 = new ListNode(ptr1->val) ; 
            ptr1 = ptr1->next ; 
        }
        ListNode* head1 = ptr3 ; 
        ListNode* ptr4 = ptr3 ; 
         while (ptr1 != NULL && ptr2 != NULL) {
            if(ptr1->val > ptr2->val ){
                ptr3 = new ListNode(ptr2->val) ;
                ptr4->next = ptr3 ; 
                ptr4 = ptr3 ; 
                ptr2 = ptr2->next ; 
            }
        else{
                ptr3 = new ListNode(ptr1->val) ; 
                ptr4->next = ptr3 ; 
                ptr4 = ptr3 ; 
                ptr1 = ptr1->next ; }
        }
        if(ptr1 == NULL){
            ptr4->next = ptr2 ; 
        }
        else{
            ptr4->next = ptr1 ; 
        }
        return head1 ; 
        }
    ListNode* merge_sort(ListNode* head ){
        if(head == NULL || head->next == NULL){
            return head ; 
        }
        ListNode* ptr = head;
        ListNode* slow = ptr  ; 
        ListNode* fast = ptr->next ; 
        while(fast != NULL && fast->next != NULL){
            slow = slow->next ; 
            fast = fast->next->next ; 
        } 
        ListNode* midnxt = slow->next ; 
        slow->next = NULL ; 
        ListNode* left  = merge_sort(ptr); 
        ListNode* right = merge_sort(midnxt);
        return merge(left , right ) ; 

        
    }
    ListNode* sortList(ListNode* head) {
        return merge_sort(head) ; 
    }
};