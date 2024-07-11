n = int(input())
lista = [0,1]

if n == 1:
    print(0)
elif n == 2:
    print(0,1)
elif n > 2:
    for i in range(0,n-2):
        x = lista[-1] + lista[-2]
        lista.append(x)
    lista_str = str(lista)[1:-1]
    print(lista_str.replace(",",""))