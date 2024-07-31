while True:
    t = int(input())
    if t > 0:
        m = [[0 for i in range(t)] for i in range(t)]
        for i in range(t):
            for j in range(t):
                if i == 0:
                    if j == 0:
                        m[i][j] = 1
                    else:
                        m[i][j] = (m[i][j-1])*2
                else:
                    if j == 0:
                        m[i][j] = m[i-1][1]
                    else:
                        m[i][j] = (m[i][j-1])*2
    else:
        break
    maior = len(str(m[t-1][t-1]))
    for i in range(t):
        for j in range(t):
            if j == (t-1):
                print(f'{m[i][j]:>{maior}}', end="")
            else:
                print(f'{m[i][j]:>{maior}}', end=" ")
        print()
    print()