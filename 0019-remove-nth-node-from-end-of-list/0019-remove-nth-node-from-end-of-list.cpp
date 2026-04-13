class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* ahead=head;
        for(int i=0;i<n;i++){
            ahead=ahead->next;
        }
        if(!ahead) return temp->next;
        while(ahead->next){
            ahead=ahead->next;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};