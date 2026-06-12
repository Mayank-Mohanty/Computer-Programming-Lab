#1. DFS of a graph.
#Input - adj[][]=[[2,3,1],[0],[0,4],[0],[2]]
#   /---- 0--------\
# 2       |         1
# |       3
# 4
'''
Visited add into res
mark it as visited

for neighbour of the visited node:
    if its not visited:
        dfs(neighbour)
'''
class Solution:
    def dfs(self,adj):
        def traversal(node):
            res.append(node)
            visited[node]=True
            for neighbour in adj(node):
                if visited[neighbour]==False:
                    traversal(neighbour)
    #---------------------------------------
        vertices=len(adj)
        visited=[False]*vertices
        res=[]
        traversal(0)
        return res
        
dfs([[2,3,1],[0],[0,4],[0],[2]])

#2. BFS of a graph.
#Input - adj[][]=[[2,3,1],[0],[0,4],[0],[2]]
#   /---- 0--------\
# 2       |         1
# |       3
# 4
from collections import deque
class Solution:
    def bfs(self,adj):
        vertices=len(adj)
        visited=[False]*vertices
        q=deque([0])
        visited[0]=True
        ans=[]
        while q:
            node=q.popleft()
            ans.append(node)
            for neighbour in adj[node]:
                if visited[neighbour]==False:
                    q.append(neighbour)
                    visited[neighbour]=True
        return ans
    
dfs([[2,3,1],[0],[0,4],[0],[2]])