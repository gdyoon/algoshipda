from math import pow

A, P = map(int, input().split())
c = [0] * 5000

def get_next(value, p):
    ans = 0
    while value > 0:
        ans += pow(value % 10, p)
        value //= 10

    return int(ans)

def dfs(value, p, step):
    if c[value] != 0:
        return c[value] - 1

    c[value] = step
    value = get_next(value, p)
    return dfs(value, p, step+1)

print(dfs(A, P, 1))