// https://leetcode.cn/problems/symmetric-tree/

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
 * @return {boolean}
 */
var isSymmetric = function (root) {
    let left = {value: []}, right = {value: []};

    function wrapper(o) {
        return function helper(root) {
            if (!root) return;
            if (root.left || root.right) {
                if (!root.left) {
                    root.left = {val: null};
                }
                if (!root.right) {
                    root.right = {val: null};
                }
            }
            helper(root.left);
            o.value.push(root.val);
            helper(root.right);
        }
    }

    wrapper(left)(root.left);
    wrapper(right)(root.right);
    console.log(left, right);
    return left.value.toString() === right.value.reverse().toString();
};

function check(p1, p2) {
    if (!p1 && !p2) return true;
    if (!p1 || !p2) return false;

    return p1.val === p2.val && check(p1.left, p2.right) && check(p1.right, p2.left);
}
var isSymmetric = function (root) {
    return check(root, root);
};

