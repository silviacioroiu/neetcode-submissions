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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        cout<<n<<endl<<count;
        if(n ==  count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        int n1 = count-n-1;
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        int i = 0;
        while (i<n1 && curr!=nullptr)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (curr!=nullptr && curr->next !=nullptr)
        {
            if (curr->next == nullptr) // when the want to delete is the ante- last
            {
                prev->next = nullptr;
            }
            ListNode* toDelete = curr->next; // we have to 'name' the want to delete
            curr->next = curr->next->next;
            delete toDelete;
            return head;
        }
        return nullptr;
    }
};
