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
var addTwoNumbers = function (l1, l2) {
    let l1len = 0, l2len = 0;
    let h = l1;
    for (; h;) {
        l1len++;
        h = h.next;
    }
    h = l2
    for (; h;) {
        l2len++;
        h = h.next;
    }


    let head = l1len > l2len ? l1 : l2;
    let walk = l1len > l2len ? l2 : l1;
    let cur = head;
    let inc = 0;
    while (walk) {
        cur.val = cur.val + walk.val + inc;
        inc = ~~(cur.val / 10);
        cur.val %= 10;
        walk = walk.next;
        if (inc && !cur.next) {
            cur.next = new ListNode(0);
        }
        cur = cur.next;
    }
    if (inc) {
        for (; inc;) {
            cur.val = cur.val + inc;
            inc = ~~(cur.val / 10);
            cur.val %= 10;
            if (inc && !cur.next) {
                cur.next = new ListNode(0);
            }
            cur = cur.next;
        }
    }
    return head;
};