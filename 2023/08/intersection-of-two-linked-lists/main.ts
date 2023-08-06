// https://leetcode.cn/problems/intersection-of-two-linked-lists/?envType=study-plan-v2&envId=top-100-liked
// 160. 相交链表

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}

function getIntersectionNode(headA: ListNode | null, headB: ListNode | null): ListNode | null {
    if (headA === null || headB === null) return null
    const map = new Map<ListNode, boolean>();
    for (let cursor: ListNode | null = headA; cursor != null; cursor = cursor.next) {
        map.set(cursor, true)
    }
    for (let cursor: ListNode | null = headB; cursor != null; cursor = cursor.next) {
        if (map.get(cursor)) return cursor
    }
    return null
};


function generateLink(arr: number[]): ListNode {
    const head = new ListNode(arr[0])
    let cursor = head
    for (let i = 1; i < arr.length; i++) {
        const node = new ListNode(arr[i])
        cursor.next = node
        cursor = node
    }
    cursor.next = null
    return head
}

function getTestCase(intersectVal: number, listA: number[], listB: number[], skipA: number, skipB: number) {
    let listALinked = generateLink(listA),
        listBLinked = generateLink(listB)
    let intersectNode: ListNode | null = listALinked
    for (let i = 0; i < skipA; i++) {
        if (intersectNode?.next === null) break
        intersectNode = intersectNode.next
    }
    let tailNode: ListNode | null = listBLinked
    for (let i = 0; i < skipB; i++) {
        if (tailNode?.next === null) break
        tailNode = tailNode.next
    }
    tailNode.next = intersectNode
    return [listALinked, listBLinked]
}

var intersectVal = 8, listA = [4, 1, 8, 4, 5], listB = [5, 6, 1, 8, 4, 5], skipA = 2, skipB = 3
var intersectVal = 2, listA = [1, 9, 1, 2, 4], listB = [3, 2, 4], skipA = 3, skipB = 1
var intersectVal = 0, listA = [2, 6, 4], listB = [1, 5], skipA = 3, skipB = 2
var intersectVal = 1, listA = [1], listB = [1], skipA = 0, skipB = 0


var [a, b] = getTestCase(intersectVal, listA, listB, skipA, skipB)

var res = getIntersectionNode(a, b)


console.log(res);

