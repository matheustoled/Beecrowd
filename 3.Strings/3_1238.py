n = int(input())

for i in range(0,n):
    a, b = map(str, input().split(" "))
    palavra = a+b
    tamanho = min(len(a),len(b))

    lista_palavras1 = list(a)
    lista_palavras2 = list(b)
    palavras_juntas = ''

    for j in range(tamanho):
        palavras_juntas += lista_palavras1[j]
        palavras_juntas += lista_palavras2[j]

    if len(a) > len(b):
        palavras_juntas += a[tamanho:]
    else:
        palavras_juntas += b[tamanho:]
        
    print(palavras_juntas)