n = int(input())
for i in range(0,n):
    x = int(input())
    c = 0
    t = 1
    while t != x+1:
        if x%t == 0:
            c += 1
        t += 1
    if c == 2:
        print(f"{x} eh primo")
    elif c != 2:
        print(f"{x} nao eh primo")