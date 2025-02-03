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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* newHead = new ListNode(0);
        ListNode* tail = newHead;
        int mergeSum = 0;

        while(temp){
            if(temp->val==0){
                  tail->next = new ListNode(mergeSum);
                  tail= tail->next;
                  mergeSum=0;
            }else{
                mergeSum += temp->val;
            }
            temp= temp->next;
        }

        return newHead->next;
    }
};