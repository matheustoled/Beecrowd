while True:
    try:
        N = int(input())

        pares = 0
        sapatos = [[0, 0] for _ in range(61)]

        for _ in range(N):
            M, L = input().strip().split(' ')
            M = int(M)

            if(L == 'D'):
                sapatos[M][0] += 1
            else:
                sapatos[M][1] += 1

        for quantidade in sapatos:
            pares += min(quantidade[0], quantidade[1])
        print(pares)
    except EOFError:
        break