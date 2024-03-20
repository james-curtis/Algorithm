// https://leetcode.cn/problems/reverse-linked-list/description/

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
function reverseList(head) {
    let prev = null;
    let cursor = head;

    while (cursor) {
        let temp = cursor.next;
        cursor.next = prev;
        prev = cursor;
        cursor = temp;
    }
    return prev;
}