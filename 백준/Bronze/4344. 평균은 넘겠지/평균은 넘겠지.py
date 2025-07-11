n = int(input())

for i in range(0,n):

    l = list(map(int,input().split()))
    n = l[0]
    scores = l[1:]

    total = sum(scores)
    avg = total / n
    k = 0

    for score in scores:
        if score > avg:
            k+=1

    percent = (k / n) * 100
    print(f"{percent:.3f}%")