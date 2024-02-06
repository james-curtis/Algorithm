// https://leetcode.cn/problems/path-sum-ii/description/

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val)
    this.left = (left === undefined ? null : left)
    this.right = (right === undefined ? null : right)
}


/**
 * @param {TreeNode} root
 * @param {number} targetSum
 * @return {number[][]}
 */
var pathSum = function (root, targetSum) {
    if (!root) {
        return [];
    }
    /**
     *
     * @type {number[][]}
     */
    const res = [];

    /**
     * @param {TreeNode} root
     * @param {number} targetSum
     * @param {number[]} pathArr
     * @param {number} pathSum
     */
    function path(root, targetSum, pathArr, pathSum) {
        pathSum += root.val;
        pathArr.push(root.val);
        if (!root.left && !root.right) {
            if (pathSum === targetSum) {
                res.push([...pathArr]);
            }
            return
        }
        root.left && path(root.left, targetSum, [...pathArr], pathSum);
        root.right && path(root.right, targetSum, [...pathArr], pathSum);
    }

    path(root, targetSum, [], 0)
    return res;
};
