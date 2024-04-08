# Algoritmo para calcular o mdc entre dois números.

#Função que recebe dois números inteiros e retorna seu MDC
def MDC (a, b):
    while (b != 0):
        r = a%b
        a = b
        b = r
    return a

a = int(input(f'Informe um primeiro número inteiro: '))
b = int(input(f'Informe um segundo número inteiro: '))

#Condição para que o programa funcione caso b seja maior que a.
if a >= b:
    mdc = MDC(a, b)
else:
    mdc = MDC(b, a)
    
#Caso os números possuam MDC = (+-)1, retornar a info que são primos entre si    
if mdc == 1 or mdc == -1:
    print(f'{a} e {b} são primos entre si.')
else:
    print(f'O valor do MDC de {a} e {b} é {mdc}.')
