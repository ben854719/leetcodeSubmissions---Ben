// Last updated: 9/5/2025, 3:10:46 PM
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
        unordered_map<ListNode*,int> map;
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        while(tempA!=NULL){
            map[tempA]=tempA->val;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            if(map.find(tempB)!=map.end()){
                return tempB;
            }
            tempB=tempB->next;
        }
        return NULL;
    }
};