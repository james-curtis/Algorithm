// https://leetcode.cn/problems/count-complete-tree-nodes/description/

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var countNodes = function(root) {
    let arr = [];
    function helper(root){
        if (!root) return;
        helper(root.left)
        arr.push(root.val);
        helper(root.right);
    }

    helper(root);
    return arr.length;
};