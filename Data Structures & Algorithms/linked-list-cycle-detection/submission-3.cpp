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
    bool hasCycle(ListNode* head) {
        std::unordered_set<ListNode*> adresses{};

        while(adresses.count(head)==0){
            if(head==nullptr||head->next==nullptr){
                return false;
            }
            adresses.insert(head);
            
            head=head->next;
            
        }
        return true;
    }
};
