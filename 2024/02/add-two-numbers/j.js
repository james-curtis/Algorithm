// https://leetcode.cn/problems/add-two-numbers/description/

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {

    let head = l1;
    let cur = head;
    let inc = 0;
    while (l2) {
        let tmp = cur.val + l2.val;
        cur.val = tmp + inc;
        inc = ~~(cur.val / 10);
        cur.val %= 10;
        l2 = l2.next;
        cur = cur.next;
    }
    return head;
};