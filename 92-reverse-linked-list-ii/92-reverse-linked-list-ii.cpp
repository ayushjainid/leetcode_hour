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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* current = head;
        ListNode* previous = nullptr;
        for(int i = 0; i < left - 1 && current != nullptr; i++) {
            previous = current;
            current = current->next;   
        }
    
    ListNode* lastNodeFirstPart = previous;
        
    ListNode* lastNodeSubPart = current;
        
    ListNode* next = nullptr;
        
    for(int j = 0; j < right - left + 1 && current != nullptr; j++) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
        
    if(lastNodeFirstPart != nullptr) {
        lastNodeFirstPart->next = previous;
    }
    else head = previous;
        
    lastNodeSubPart->next = current;
        
    return head;
    }
};