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
    ListNode* sortedMerge(ListNode* a, ListNode* b) {
        if (!a) {
            return b;
        } else if (!b) {
            return a;
        }
        
        ListNode* result = nullptr;
        if (a->val <= b->val) {
            result = a;
            result->next = sortedMerge(a->next, b);
        } else {
            result = b;
            result->next = sortedMerge(a, b->next);
        }
        return result;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() < 1) return nullptr;
        ListNode* ans = lists[0];
        
        for (int i = 1; i < lists.size(); i++) {
            ans = sortedMerge(ans, lists[i]);
        }
        return ans;
    }
};