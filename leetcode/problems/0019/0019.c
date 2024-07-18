/*
 * 19. Remove Nth Node From End of List
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *prev = NULL;
    struct ListNode *del = head;
    struct ListNode *cur = head;

    for (int inode = 1; cur; inode++, cur = cur->next) {
        if (inode > n) {
            prev = del;
            del = del->next;
        }
    }
    if (prev == NULL) {
        return del->next;
    } else {
        prev->next = del->next;
        return head;
    }
}
