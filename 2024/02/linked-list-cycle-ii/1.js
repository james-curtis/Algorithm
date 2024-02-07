// https://leetcode.cn/problems/linked-list-cycle-ii/description/

/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

// function ListNode(val) {
//     this.val = val;
//     this.next = null;
// }

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var detectCycle = function (head) {
    let map = new Map();
    let cur = head;
    while (cur) {
        if (map.has(cur)) {
            return cur;
        }
        map.set(cur, 1);
        cur = cur.next;
    }
    return null
};