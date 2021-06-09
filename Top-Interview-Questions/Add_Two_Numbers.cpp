// Problem
// You are given two non-empty linked lists representing two non-negative integers. 
// The digits are stored in reverse order, and each of their nodes contains a single digit. 
// Add the two numbers and return the sum as a linked list.

// Solution 1: Iterative approach
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode tempHead(0);
        ListNode *p = &tempHead;
        while (c || l1 || l2) {
            c += (l1? l1->val : 0) + (l2? l2->val : 0);
            p->next = new ListNode(c%10);
            p = p->next;
            c /= 10;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return tempHead.next;
    }
};

// Solution 2: Recursive approach
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return NULL;
        int c = (l1? l1->val:0) + (l2? l2->val:0);
        ListNode *tempHead = new ListNode(c%10), *next = l1? l1->next:NULL;
        c /= 10;
        if(next) next->val += c;
        else if(c) next = new ListNode(c);
        tempHead->next = addTwoNumbers(l2? l2->next:NULL, next);
        return tempHead;
    }
};

// Problem Link: https://leetcode.com/problems/add-two-numbers
// References: https://leetcode.com/problems/add-two-numbers/discuss/1340/A-summary-about-how-to-solve-Linked-List-problem-C%2B%2B
