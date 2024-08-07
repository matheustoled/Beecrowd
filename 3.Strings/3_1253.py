a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
li = {a[i]: i for i in range(len(a))}
il = {i: a[i] for i in range(len(a))}

n = int(input())

for i in range(n):
    s = input()
    av = int(input())
    nv = ""
    for l in s:
        nv += il[(li[l] - av) % len(a)]
    print(nv)