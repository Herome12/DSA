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
    ListNode* middleNode(ListNode* head) {
        int count =0;
        int mid =0;
        ListNode* temp = head;
        if(temp == NULL) return NULL;

        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        
        temp = head;
        while(mid<(count/2)){
            mid++;
            temp=temp->next;
        }
     


        return temp;

        

        
    }
};