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
    void reorderList(ListNode* head) {
        std::vector<ListNode*> addresses;
  
        
        

        while(head != nullptr){
            addresses.push_back(head);
            head = head->next;
        }

        
        int left = 0;
int right = addresses.size() - 1;
ListNode* tail = nullptr;     // current tail of new list

while (left < right) {
    addresses[left]->next = addresses[right];     // left → right
    left++;
    if (left == right) break;                      // tek node kaldı (odd length)
    addresses[right]->next = addresses[left];      // right → next left
    right--;
}

addresses[left]->next = nullptr;   // son node null'a

    }
};
