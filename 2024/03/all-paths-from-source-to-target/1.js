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

// floyd
var allPathsSourceTarget = function (graph) {
    const blankMatrix = Array.from({length: graph.length}).map(e => Array.from({length: graph.length}).fill(Infinity))
    const matrix = structuredClone(blankMatrix);

    for (let i = 0; i < graph.length; i++) {
        matrix[i][i] = 0;
        for (let j = 0; j < graph[i].length; j++) {
            matrix[i][graph[i][j]] = 1;
        }
    }

    function floyd(matrix) {
        const dist = matrix;
        const path = structuredClone(blankMatrix);

        for (let i = 0; i < matrix.length; i++) {
            for (let j = 0; j < matrix.length; j++) {
                if (Object.is(matrix[i][j], Infinity)) {
                    path[i][j] = null;
                } else {
                    path[i][j] = j;
                }
            }
        }

        for (let candidate = 0; candidate < matrix.length; candidate++) {
            for (let i = 0; i < matrix.length; i++) {
                for (let j = 0; j < matrix.length; j++) {
                    if (dist[i][j] > dist[i][candidate] + dist[candidate][j]) {
                        dist[i][j] = dist[i][candidate] + dist[candidate][j];
                        path[i][j] = path[i][candidate];
                    }
                }
            }
        }
        return {dist, path}
    }

    floyd(matrix);

    let ans = [];
    // 好像不行了，只能找到最短路


};