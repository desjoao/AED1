#  Programa que filtra as linhas de um relatório
# selecionando os números inteiros ali presentes
# para então somá-los. Por fim, informa o resultado
# da soma de cada linha.

#  Início
#  Número de linhas de entrada

num = int(input(''))

#  Lista com os números somados de cada linha

numeros = []

#  Variáveis para alocação dos números encontrados nas linhas e a soma desses

numero = 0
soma = 0

#  Laço que percorre cada linha e retira os números encontrados,
# concatenando-os na variável 'numero', assim que o laço não encontra mais valor
# numérico, ele transforma a variável 'numero' em inteiro, e a soma à variável 'soma'.
#  Por fim, o programa adiciona o resultado à lista 'numeros' e zera as variáveis
# para poderem ser utilizadas novamente.

for i in range (num):
    linhas = input('Informe uma linha do relatório por vez: ')
    for j in range(len(linhas)):
        if (str(linhas[j]).isdigit()):
            numero = str(numero) + str(linhas[j])
        elif(str(linhas[j-1]).isdigit()):
             soma += int(numero)
             numero = 0
        if j == len(linhas)-1:
            soma += int(numero)
    numeros.append(soma)
    soma = 0
    numero = 0

#  Saída de dados.
for i in range(num):
    print (numeros[i])

#  Fim
