while True:
    try:
        num_atributos = int(input())
        num_cartas_m, num_cartas_l = map(int, input().split())
        marcos = []
        leonardo = []

        for i in range(0, num_cartas_m):
            marcos.append(list(map(int, input().split())))

        for i in range(0, num_cartas_l):
            leonardo.append(list(map(int, input().split())))
        
        cm, cl = map(int, input().split())
        a = int(input())

        atributo_marcos = marcos[cm-1][a-1]
        atributo_leonardo = leonardo[cl-1][a-1]
        
        if atributo_marcos > atributo_leonardo:
            print("Marcos")
        elif atributo_marcos < atributo_leonardo:
            print("Leonardo")
        else:
            print("Empate")

    except EOFError:
        break