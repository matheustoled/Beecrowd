#inputs
L = int(input())
T = str(input())

#matriz
matriz = []

#criar matriz
for linha in range(0,11):
    elementos_linhas = []
    for elemento in range(0,11):
        elementos_linhas.append(elemento)
    matriz.append(elementos_linhas)

print(matriz)

#calcular soma e media
soma = sum(matriz[L])
try:
    media = soma/len(matriz[L])
except:
    ZeroDivisionError
    
#soma ou media
if T == 'S':
    print(f"{soma:.1f}")
elif T == 'M':
    print(f"{media:.1f}")