/**
 * @param {number} capacity
 */
var LRUCache = function (capacity) {
    this.cap = capacity
    this.map = new Map()
};

/**
 * @param {number} key
 * @return {number}
 */
LRUCache.prototype.get = function (key) {
    const temp = this.map.get(key);
    if (temp === undefined) {
        return -1
    }
    this.map.delete(key)
    this.map.set(key, temp);
    return temp;
};

/**
 * @param {number} key
 * @param {number} value
 * @return {void}
 */
LRUCache.prototype.put = function (key, value) {
    if (this.map.has(key)) {
        this.map.delete(key);
        this.map.set(key, value);
        return;
    }
    if (this.map.size >= this.cap) {
        this.map.delete(this.map.keys().next().value)
    }
    this.map.set(key, value)
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * var obj = new LRUCache(capacity)
 * var param_1 = obj.get(key)
 * obj.put(key,value)
 */

// var obj = new LRUCache(2)
// obj.put(1, 1)
// obj.put(2, 2)
// console.log(obj.get(1))
// obj.put(3, 3)
// console.log(obj.get(2))
