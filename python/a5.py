#!/usr/bin/env python
import random

palavras = []
arquivo = open('palavras.txt', 'r')
while True:
    palavra = arquivo.readline()
    if palavra == "\n": break
    palavras.append(palavra.upper())

palavra = palavras[random.randint(0,len(palavras)-1)]
p = []

for i in range(0,len(palavra)-1):
    p.append("_ ")
print(p)
print(palavra)

erros=0
acertos=0
while erros < 6 and acertos < len(palavra)-1:
    letra = (input("Digiteuma letra: "))
    letra = letra.upper()
    if palavra.count(letra) == 0:
        erros = erros + 1
        print("-> Você errou pela %sª vez. Tente de novo!"%erros)
    else: 
        for i in range(0, len(palavra)-1):
            if(palavra[i]==letra):
                p[i]=letra+' '
                acertos = acertos + 1
        print("A palavra é: %s" %''.join(p))
if(erros==6):
    print("Você perdeu. Fim de Jogo!")
else:
        print("Você ganhou. Fim de Jogo!")
