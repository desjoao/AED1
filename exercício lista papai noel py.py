#início
#número de crianças
num = int(input("quantidade de crianças: "))

#lista com o nome de todas as crianças e variáveis que as diferencia de acordo com seus comportamentos
bomComportamento = 0
mauComportamento = 0
lista = []

#preenchimento da lista e acréscimo das variáveis
for i in range(num):
    nome = input("nome: ")
    nome = nome.split(' ')
    lista.append(nome[1])
    if nome[0] == '+':
        bomComportamento += 1
    else:
        mauComportamento += 1

#ordenação da lista
for i in range(len(lista)):
    for j in range(len(lista)):
        if j >= i:
            if lista[j] < lista [i]:
                 lista [i], lista [j] = lista [j], lista[i]

#saída de dados
for i in range (len(lista)):
    print(lista[i])
print(f'Se comportaram: {bomComportamento} | Não se comportaram: {mauComportamento}')
