n = int(input())
count = 0

cols = [False] * n
diag1 = [False] * (2 * n - 1) 
diag2 = [False] * (2 * n - 1)  

def dfs(row):
    global count
    if row == n:
        count += 1
        return

    for col in range(n):
        if cols[col] or diag1[row + col] or diag2[row - col + n - 1]:
            continue

        cols[col] = diag1[row + col] = diag2[row - col + n - 1] = True
        dfs(row + 1)
        cols[col] = diag1[row + col] = diag2[row - col + n - 1] = False

dfs(0)
print(count)
