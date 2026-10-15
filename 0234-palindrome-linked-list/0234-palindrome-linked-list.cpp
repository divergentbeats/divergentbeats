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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head, *fast=head,*prev=nullptr;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *curr=slow, *next;
        prev=nullptr;
        while(curr!=nullptr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode *first=head, *second=prev;
        while(second!=nullptr)
        {
            if(first->val!=second->val)
            return false;
            first=first->next;
            second=second->next;
        }

        return true;
        
    }
};