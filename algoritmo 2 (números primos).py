#Algoritmo que retorna todos os números primos contidos no intervalo
#dos naturais tendo como limite um inteiro fornecido pelo usuário.

n = int(input('Insira um número inteiro positivo como limite do intervalo: '))

#Cria uma lista com todos os números inteiros até o escolhido pelo usuário
#como limite superior.
intervalo = []
for i in range (2, n+1):
    intervalo.append(i)

#Verifica algebricamente quais números são primos e os guarda
#em uma nova lista.
primos = []
c = 1
for j in range (2, n+1):
    if len(primos) == 0:
        primos.append(j)
    for l in range (len(primos)):
        if j % primos[l] == 0:
            c = 0
    if c == 1:        
        primos.append(j)
    c = 1
    
#Imprime a lista de números primos criada. 
print (f'Os números primos contidos no intervalo de 1 até {n} são: {primos}')
