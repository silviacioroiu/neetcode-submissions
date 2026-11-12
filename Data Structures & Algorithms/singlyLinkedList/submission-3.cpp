class ListNode{
    public:
    int val;
    ListNode* next; 

    ListNode(int val) : val(val), next(nullptr){}// to nullptr by default
    ListNode(int val, ListNode* next) : val(val), next(next){} // constructor for value and next
};

class LinkedList {
private:
    ListNode* head;
    ListNode* tail;
public:
    // constructor
    LinkedList() {
        head = new ListNode(-1);
        tail = head;
    }

    int get(int index) {
        ListNode* curr = head->next;
        int i = 0;
        while(curr!=nullptr){
            if(i == index){
                return curr->val;
            }
            i++;
            curr= curr->next;
        }
        return -1;
    }

    void insertHead(int val) {
        ListNode* n = new ListNode(val);
        n->next = head->next;
        head->next = n;

        //if list was empty
        if(n->next == nullptr){
            tail = n;
        }
    }
    
    void insertTail(int val) {
        tail->next = new ListNode(val);
        tail = tail->next;
    }

    bool remove(int index) {
        int i = 0;
        ListNode* curr = head;
        while(index>i && curr!=nullptr){
            curr= curr->next;
            i++;
        }
        if(curr != nullptr && curr->next !=nullptr){
            if(curr->next ==tail){
                tail = curr;
            }
            ListNode* toDelete = curr->next;
            curr->next = curr->next->next;
            delete toDelete;
            return true;
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> result;
        ListNode* curr = head->next;
        while(curr!=nullptr){
            result.push_back(curr->val);
            curr = curr->next;
        }
        return result;
    }
};
