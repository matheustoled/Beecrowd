n = int(input())

lista = []
lista_in = []
lista_out = []

for i in range(n):
    x = int(input())
    lista.append(x)

for v in range(len(lista)):
    if lista[v] >= 10 and lista[v] <= 20:
        lista_in.append(lista[v])
    else:
        lista_out.append(lista[v])

qnt_in = len(lista_in)
qnt_out = len(lista_out)

print("{} in".format(qnt_in))
print("{} out".format(qnt_out))