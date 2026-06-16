class Solution {
public:
    ListNode* middleNode(ListNode* head) {

       ListNode *curr = head;
       int count = 1;
       while(curr->next!=nullptr)
       {
        curr = curr->next;
        count++;
       }
        int  n = count/2;
        curr = head;
       for(int i=0;i<n;i++)
       curr = curr->next;

       return curr;
       
    }
};