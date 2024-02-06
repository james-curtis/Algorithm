// https://leetcode.cn/problems/reverse-linked-list/

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

function ListNode(val, next) {
    this.val = (val === undefined ? 0 : val)
    this.next = (next === undefined ? null : next)
}

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function (head) {
    let prev = null;
    let cursor = head
    while (1) {
        if (!cursor) {
            break;
        }
        const temp = cursor.next;
        cursor.next = prev
        prev = cursor
        cursor = temp
    }
    return prev
};