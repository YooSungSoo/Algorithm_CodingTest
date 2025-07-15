def z(n, r, c):
    if n == 0:
        return 0

    half = 2 ** (n - 1)  
    area = half * half  

    if r < half and c < half:
        return z(n - 1, r, c)
    
    elif r < half and c >= half:
        return area + z(n - 1, r, c - half)
    
    elif r >= half and c < half:
        return area * 2 + z(n - 1, r - half, c)
    
    else:
        return area * 3 + z(n - 1, r - half, c - half)

N, r, c = map(int, input().split())

print(z(N, r, c))
