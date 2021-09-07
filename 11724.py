
N, M = map(int, input().split())

G = [[] for _ in range(N+1)]
visited = [False for _ in range(N+1)]

for _ in range(M):
    u, v = map(int, input().split())
    G[u].append(v)
    G[v].append(u)

def dfs(start):
    visited[start] = True

    for i in range(len(G[start])):
        vertex = G[start][i]

        if visited[vertex] == False:
            dfs(vertex)

components = 0

for i in range(1, N+1):
    if visited[i] == False:
        dfs(i)
        components += 1

print(components)