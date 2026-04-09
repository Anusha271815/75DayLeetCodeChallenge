
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode rand(0);
        ListNode* ans=&rand;
        while(list1 && list2){
            if(list1->val<=list2->val){
                ans->next=list1;
                list1=list1->next;
            }else{
                ans->next=list2;
               list2=list2->next;
            }
            ans=ans->next;
        }
        if (list1) ans->next = list1;
        if (list2) ans->next = list2;
        return rand.next;
    }
};