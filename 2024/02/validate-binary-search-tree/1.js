// https://leetcode.cn/problems/validate-binary-search-tree/description/

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
 * @param {TreeNode|null} root
 * @return {boolean}
 */
var isValidBST = function (root) {
    /**
     *
     * @type {number[]}
     */
    const arr = [];

    /**
     * @param {TreeNode|null} root
     * @return {boolean}
     */
    var helper = function (root) {
        if (!root) {
            return true;
        }
        const res1 = helper(root.left);

        if (arr.length && arr[arr.length - 1] >= root.val) {
            return false;
        }
        arr.push(root.val);

        const res2 = helper(root.right);
        return res1 && res2;
    };

    return helper(root);
};