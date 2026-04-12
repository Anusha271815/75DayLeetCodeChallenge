
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* right=splitAtMid(head);
        ListNode* left=head;
        ListNode* rightrev=reverse(right);
        //merge left and rightrev alternatively
        right=rightrev;
        ListNode* tail=NULL;
        while(left!=NULL && right!=NULL){
            ListNode* nextleft=left->next;
            ListNode* nextright=right->next;
            left->next=right;
            right->next=nextleft;

            tail=right;

            left=nextleft;
            right=nextright;
        }
        if(right){
            tail->next=right;
        }
    }

    ListNode* splitAtMid(ListNode* head){
        ListNode* prev=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev){
            prev->next=NULL;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
};