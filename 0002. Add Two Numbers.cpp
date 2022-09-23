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
    
    ListNode * insert(ListNode * head,int val)
    {
        ListNode *temp=new ListNode(val);
        if(head==NULL)
            head=temp;
        else
        {
            ListNode *ptr=head;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=temp;
        }
        return head;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=NULL;
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            int sum=l1->val+l2->val+carry;
            if(sum<10)
            {
                head=insert(head,sum);
                carry=0;
            }
            else
            {
                head=insert(head,sum%10);
                carry=1;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            int sum=l1->val+carry;
            if(sum<10)
            {
                head=insert(head,sum);
                carry=0;
            }
            else
            {
                head=insert(head,sum%10);
                carry=1;
            }
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            int sum=l2->val+carry;
            if(sum<10)
            {
                head=insert(head,sum);
                carry=0;
            }
            else
            {
                head=insert(head,sum%10);
                carry=1;
            }
            l2=l2->next;
        }
        if(carry==1)
        {
            head=insert(head,1);
            
        }
        return head;
    }
};