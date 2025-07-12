import sys

a = int(sys.stdin.readline())
words = set()

for i in range(0,a):
    b =sys.stdin.readline().strip()
    words.add(b)

words = sorted(words, key=lambda x: (len(x), x))

for w in words:
    print(w)

