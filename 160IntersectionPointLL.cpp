/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA=0,countB=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            countA++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            countB++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(countA>countB){
            int x=countA-countB;
            while(x--){
                temp1=temp1->next;
            }
        }
        else{
            int x=countB-countA;
            while(x--){
                temp2=temp2->next;
            }
        }
        ListNode* ans=NULL;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return ans;
    }
};
