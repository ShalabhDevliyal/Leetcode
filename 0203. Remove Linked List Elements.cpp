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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * temp=NULL,*ptr=head;
        
        if(ptr==NULL)
            return temp;
        
        while(ptr->next!=NULL)
        {
            if(ptr->next->val==val)
            {
                temp=ptr->next;
                ptr->next=ptr->next->next;
                delete temp;
            }
            else
                ptr=ptr->next;
        }
        if(head->val==val)
        {
            temp=head;
            head=head->next;
            delete temp;
        }
        return head;
    }
};