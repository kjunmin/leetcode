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

        ListNode* start = new ListNode(0);
        start->next = head;
        ListNode* ans = start;
        ListNode* end = head->next;
        
        int length = 1;
        
        while (head->next) {
            head = head->next;
            length++;
        }
        
        int remainder = length - n;
        
        while (remainder > 0) {
            end = end->next;
            start = start->next;
            remainder--;
        }
        start->next = end;
        return ans->next;
    }
};