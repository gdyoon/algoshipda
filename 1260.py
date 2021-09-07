import queue

"""
Input : 

4 5 1
1 2
1 3
1 4
2 4
3 4
"""

graph = [[] for _ in range(10)]
visited = [False for _ in range(10)]

def dfs(start):
    visited[start] = True
    print(start, end=' ')

    for i in range(0, len(graph[start])):
        vertex = graph[start][i]

        if visited[vertex] == False:
            dfs(vertex)


def bfs(start):
    q = queue.Queue()
    visited = [start]
    q.put(start)

    while not q.empty():
        node = q.get()
        print(node, end=' ')

        for i in range(0, len(graph[start])):
            vertex = graph[start][i]

            if vertex not in visited:
                visited.append(vertex)
                q.put(vertex)

def main():
    vertex, edge, start = map(int, input().split())

    for _ in range(edge):
        begin, end = map(int, input().split())
        graph[begin].append(end)
        graph[end].append(begin)

    for i in range (1, vertex+1):
        graph[i].sort()

    bfs(start)
    print()
    dfs(start)


if __name__ == '__main__':
    main()