# https://leetcode.cn/problems/lru-cache/
class LRUCache:
    mapper = {}
    capacity = 0

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.mapper = {}

    def get(self, key: int) -> int:
        if self.mapper.get(key) is None:
            return -1
        res = self.mapper.pop(key)
        self.mapper[key] = res
        print(self.mapper)
        return res

    def put(self, key: int, value: int) -> None:
        if self.mapper.get(key) is not None:
            del self.mapper[key]
            self.mapper[key] = value
            return
        if len(self.mapper) >= self.capacity:
            del self.mapper[next(iter(self.mapper))]
        self.mapper[key] = value
        print(self.mapper)