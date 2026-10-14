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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head, *fast=head,*prev=nullptr;
        if(head==nullptr)
            return head;
        if(head->next==nullptr)
        {
        head=head->next;
        return head;
        }
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        if(fast==nullptr)
        return head->next;
        while(fast!=nullptr)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=slow->next;
        return head;
    }
};