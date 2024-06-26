/**
 * https://leetcode.com/problems/add-two-numbers/
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int reg = 0;
    struct ListNode *lhead = NULL, *lprev = NULL;
    for (; l1 || l2 || reg;) {
        struct ListNode *ls = malloc(sizeof(struct ListNode));
        ls->next = NULL;
        ls->val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + reg;
        reg = ls->val / 10;
        ls->val %= 10;
        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
        if (!lprev) {
            lhead = lprev = ls;
        } else {
            lprev->next = ls;
            lprev = ls;
        }
    }
    return lhead;
}
