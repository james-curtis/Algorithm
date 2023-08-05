// https://leetcode.cn/problems/sort-list/?envType=study-plan-v2&envId=top-100-liked
// 148. 排序链表

/**
 * Definition for singly-linked list.
 */
class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}

function sortList(head: ListNode | null): ListNode | null {
    while (true) {
        let isModifiy = false
        for (let cursor = head; cursor?.next != null; cursor = cursor.next) {
            if (cursor.next.val < cursor.val) {
                [cursor.val, cursor.next.val] = [cursor.next.val, cursor.val]
            }
        }
        if (isModifiy === false) {
            return head
        }
    }
};

var arr = Array.from({ length: 50000 }).map((_, idx) => idx)
arr.push(1)
var linkHead = new ListNode()
var head = linkHead
arr.map(e => {
    linkHead.next = new ListNode(e)
    linkHead = linkHead.next
})
head = head.next as ListNode
// console.log(`origin`, JSON.stringify(head));
console.log(arr.slice(49990));


console.time('sortList')
sortList(head)
console.timeEnd('sortList')

console.log(head);

// console.log(JSON.stringify(head));

