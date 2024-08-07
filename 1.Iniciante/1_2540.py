while True:
    try:
        n = int(input())

        votos = []
        votos_s = []
        votos_n = []

        votos = list(map(int, input().split()))

        for i in votos:
            if i == 1:
                votos_s.append(1)
            else:
                votos_n.append(1)

        votos_total = sum(votos_s) + sum(votos_n)
        impeachment = (2/3) * votos_total
        
        if sum(votos_s) >= impeachment:
            print("impeachment")
        else:
            print("acusacao arquivada")

    except EOFError:
        break