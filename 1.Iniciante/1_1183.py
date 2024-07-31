O = input()

soma = 0
qnt_elementos = 0
matriz = []

for i in range(0,12):
    elementos_linha = []
    for j in range(0,12):
        valor = float(input())
        elementos_linha.append(valor)
    matriz.append(elementos_linha)

for r in range(0,12):
    for v in range(0+1,12):
        soma += matriz[r][v]
        qnt_elementos += 1

media = soma/qnt_elementos

#soma ou media
if O == 'S':
    print(f"{soma:.1f}")
elif O == 'M':
    print(f"{media:.1f}")