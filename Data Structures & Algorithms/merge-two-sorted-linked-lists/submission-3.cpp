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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        ListNode dumm;
        ListNode* temp = &dumm;

        while(curr1!=nullptr && curr2!=nullptr){
            
            if(curr1->val <= curr2->val){
                ListNode* n = new ListNode(curr1->val);
                temp->next = n;
                temp=temp->next;
                curr1 = curr1->next;
            }else{
                ListNode* n = new ListNode(curr2->val);
                temp->next = n;
                temp=temp->next;
                curr2 = curr2->next;
            }
        }
        if(curr1 == nullptr){
            //we still need to add curr2
            temp->next = curr2;
        }
        if(curr2 ==nullptr){
            // we need to add curr1
            temp->next = curr1;
        }
        return dumm.next;
    }
};
