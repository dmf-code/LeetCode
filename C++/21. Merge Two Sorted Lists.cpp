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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *root,*rt;
        rt = root = new ListNode(0);
        while(l1 || l2){
            if (l1 && !l2) {
                root->next = l1;
                l1 = l1->next;
                root = root->next;
                continue;
            }
            
            if (!l1 && l2) {
                root->next = l2;
                l2 = l2->next;
                root = root->next;
                continue;
            }
            
            if (l1 && l2) {
                if (l1->val <= l2->val) {
                    root->next = l1;
                    l1 = l1->next;
                    root = root->next;
                } else {
                    root->next = l2;
                    l2 = l2->next;
                    root = root->next;
                }
            }
        }
        root->next = NULL;
        return rt->next;
    }
};