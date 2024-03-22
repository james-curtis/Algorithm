rl = require("readline").createInterface({input: require('fs').createReadStream('1.txt')});
// rl = require("readline").createInterface({input: process.stdin});
readline = () => new Promise(res => rl.on('line', res))

void async function () {
    // Write your code here
    while (line = await readline()) {
        let tokens = line.split(' ');
        let a = parseInt(tokens[0]);
        let b = parseInt(tokens[1]);
        console.log(a + b);
    }
}()
