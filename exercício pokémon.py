#  Programa para registrar pokémons capturados
# insirindo-os numa lista sem repetições,
# informando então quantos pokémons faltam
# para que a totalidade de pokémons existentes
# da primeira geração tenha sido capturada.


#  Lista para armazenamento dos nomes de pokémons,
# sem que haja repetições.
lista = []

#  Variável que recebe a quantidade de pokémons capurados
# indiferente se tenha repetições
qnt = int(input(''))

#  Laço para armazenar o nome dos pokémons que ainda
# não estão na lista.
for i in range(qnt):
    pkm = input('')
    if len(lista) == 0:
        lista.append(str(pkm))
    else:
        for j in range (len(lista)):
            if pkm == str(lista[j]):
                c = 0
                break
            else:
                c = 1
        if c == 1:
            lista.append(str(pkm))

# Saída de dados.
print(lista)
print(f'Falta(m) {151 - len(lista)} pomekon(s).')
    
