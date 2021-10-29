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
        ListNode* ans = new ListNode(0);
        ListNode* start = ans;
        int carry = 0;
        
        while (l1 || l2 || carry) {
            int num1 = l1 ? l1->val : 0;
            int num2 = l2 ? l2->val : 0;
            
            int sum = num1 + num2 + carry;
            carry = sum / 10;
            int remainder = sum % 10;
            
            ans->next = new ListNode(remainder);
            ans = ans->next;
           
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
            
            
        }
        
        return start->next;
    }
};