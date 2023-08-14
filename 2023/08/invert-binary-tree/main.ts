// https://leetcode.cn/problems/invert-binary-tree/description/
// 226. 翻转二叉树

var root = [4, 2, 7, 1, 3, 6, 9]

class TreeNode {
    val: number | null
    left: TreeNode | null
    right: TreeNode | null
    constructor(val: number | null, left: TreeNode | null = null, right: TreeNode | null = null) {
        this.val = val
        this.left = null
        this.right = null
    }
}


function genTree(arr: number[]): TreeNode {
    const root = new TreeNode(arr[0], null, null)


    let i = 1
    while (i < arr.length) {
        const node = queue.shift()
        if (node) {
            node.left = new Node(arr[i])
            queue.push(node.left)
            i++
            if (i < arr.length) {
                node.right = new Node(arr[i])
                queue.push(node.right)
                i++
            }
        }
    }
    return root
}