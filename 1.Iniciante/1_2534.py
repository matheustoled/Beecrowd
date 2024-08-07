while True:
    try:
        n, q = map(int, input().split())
        notas = []

        for i in range(0,n):
            x = int(input())
            notas.append(x)

        for i in range(len(notas)-1):
            for j in range(len(notas)-1):
                if notas[j] < notas[j+1]:
                    notas[j], notas[j+1] = notas[j+1], notas[j]

        for i in range(0,q):
            x = int(input())
            print(notas[x-1])
    except EOFError:
        break