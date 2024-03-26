// https://leetcode.cn/problems/all-paths-from-source-to-target/

/**
 * @param {number[][]} graph
 * @return {number[][]}
 */
var allPathsSourceTarget = function (graph) {
    let ans = [], path = [];

    function dfs(start) {
        if (start === graph.length - 1) {
            ans.push([...path, start]);
            return;
        }
        for (let i = 0; i < graph[start].length; i++) {
            path.push(start);
            dfs(graph[start][i]);
            path.pop();
        }
    }

    dfs(0);
    return ans;
};

res = allPathsSourceTarget([[2], [], [1]]);
console.log(res);