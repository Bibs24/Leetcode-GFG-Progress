class Solution:
    def buildMatrix(self, k: int, rowConditions: List[List[int]], colConditions: List[List[int]]) -> List[List[int]]:
        def getOrder(arr): 
            q = collections.deque([])
            vis  = set()
            inDeg = collections.defaultdict(int)
            g = collections.defaultdict(list)
            for i,j in arr:
                g[i-1].append(j-1)
                inDeg[j-1] += 1
            for i in range(k):
                if inDeg[i] == 0:
                    vis.add(i)
                    q.append(i)
            order = []
            while q:
                curr  = q.popleft()
                order.append(curr)
                for nei in g[curr]:
                    inDeg[nei] -= 1
                    if inDeg[nei] == 0 and nei not in vis:
                        q.append(nei)
                        vis.add(nei)
            return order if len(vis) == k else []
        row = getOrder(rowConditions)
        col = getOrder(colConditions)
        if not row or not col:
            return []
        M = [[0 for _ in range(k)]for _ in range(k)]
        for x in range(k):
            i = row.index(x)
            j = col.index(x)
            M[i][j] = x+1
        return M
        