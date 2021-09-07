
T = int(input())

def dfs(start):
    visited[start] = True
    v = p[start]

    if not visited[v]:
        dfs(v)
    

for _ in range(T):
    N = int(input())
    p = [0] + list(map(int, input().split()))
    visited = [True] + [False] * N

    component = 0

    for i in range(1, N+1):
        if not visited[i]:
            dfs(i)
            component += 1
    
    print(component)
