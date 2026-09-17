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
    int GCD(int x,int y)
    {
        if(x>y)return GCD(y,x);
        while(x!=0 && y!=0)
        {
            int z=y%x;
            y=x;
            x=z;
 
        }
        return y;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp->next)
        {
            ListNode* nn=new ListNode(GCD(temp->val,temp->next->val));
            nn->next=temp->next;
            temp->next=nn;
            temp=nn->next;
        }
        return head;
        
    }
};