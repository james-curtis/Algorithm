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

    const {dist, path} = floyd(matrix);
    console.log(dist, path);

    const ans = [0];
    console.log(`0 -> n-1 最短长度 ${dist[0][matrix.length - 1]}`);
    for (let i = 0; i !== matrix.length - 1;) {
        i = path[i][matrix.length - 1];
        ans.push(i);
    }
    console.log(`最短路径 ${ans.join('->')}`)
};

graph = [[4, 3, 1], [3, 2, 4], [3], [4], []]
allPathsSourceTarget(graph)