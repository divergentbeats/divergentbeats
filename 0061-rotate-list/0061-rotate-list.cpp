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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* tail = head;
        if(head == nullptr || head->next == nullptr)
        return head;
        int len=1;
        while(tail->next!=nullptr)
        {
            tail=tail->next;
        len++;
        }
        tail->next = head;
        k = k%len;
        ListNode* curr = head;
        for(int i=0;i<len-k-1;i++)
        curr = curr->next;
        ListNode* newhead = curr->next;
        curr->next = nullptr;

        return newhead;
        
    }
};