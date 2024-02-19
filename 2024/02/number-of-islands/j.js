// https://leetcode.cn/problems/number-of-islands/description/?envType=study-plan-v2&envId=top-100-liked

/**
 * @param {string[][]} grid
 * @return {number}
 */
var numIslands = function (grid) {
    let ans = 0;

    function dfs(x, y) {
        if (x < 0 || y < 0 || x >= grid.length || y >= grid[0].length || grid[x][y] === `0`) {
            return;
        }

        grid[x][y] = `0`;
        dfs(x, y - 1);
        dfs(x + 1, y);
        dfs(x, y + 1);
        dfs(x - 1, y);
    }

    for (let i = 0; i < grid.length; i++) {
        for (let j = 0; j < grid[i].length; j++) {
            if (grid[i][j] === `1`) {
                ans++;
                dfs(i, j);
            }
        }
    }
    return ans;
};

grid = [["1", "1", "1", "1", "0"], ["1", "1", "0", "1", "0"], ["1", "1", "0", "0", "0"], ["0", "0", "0", "0", "0"]];
grid = [["1", "0", "1", "1", "0", "1", "1"]];
console.log(numIslands(grid));