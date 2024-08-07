s = str(input())
numeros = list(s)

for i in range(len(numeros)):
    numeros[i] = int(numeros[i])

q1 = numeros.count(1)

if q1%2 == 0:
    print(s+'0')
else:
    print(s+'1')