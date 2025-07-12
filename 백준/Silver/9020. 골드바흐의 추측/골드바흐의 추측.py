def sieve(n):
    prime = [True] * (n + 1)
    prime[0] = prime[1] = False
    for i in range(2, int(n**0.5) + 1):
        if prime[i]:
            for j in range(i * i, n + 1, i):
                prime[j] = False
    return prime

t = int(input())
b_list = [int(input()) for _ in range(t)]
max_b = max(b_list)

is_prime = sieve(max_b)

for b in b_list:
    for i in range(b // 2, 1, -1):  
        if is_prime[i] and is_prime[b - i]:
            print(i, b - i)
            break