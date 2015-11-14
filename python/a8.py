#!/usr/bin/env python
str = input('Digite o texto: ')
str2 = str.upper()
vogais = "AEIOU"
consoantes = "BCDFGHJKLMNPQRSTVWXYZ"
pontos = ".;?:.!"

n_vogais = 0.0
n_consoantes = 0.0
n_espacos = 0.0
n_pontos = 0.0
n_outros = 0.0
n_pa = 0.0
n_npa= 0.0

for i in range(0,len(str2)):
    if str2[i] in vogais:
        n_vogais+=1;
    elif str2[i] in consoantes:
        n_consoantes+=1;
    elif str2[i] in pontos:
        n_pontos+=1;
    elif str2[i] == ' ':
        n_espacos+=1;
    else:
        n_outros+=1;

str1 = str2.replace(" ","")
for i in range(2,len(str1)):
    for j in range(0,len(str1)-i+1):
        s = str1[j:(j+i)]
        if(s == s[::-1]):
            n_pa+=1;
        else:
            n_npa+=1;

fator = 100/len(str2)

print("Palavra: %s" %str)
print("Caracters: %i" %len(str2))
print("%d vogais: %.2f%%" %(n_vogais,n_vogais*fator))
print("%d consoantes: %.2f%%" %(n_consoantes,fator*n_consoantes))
print("%d pontos: %.2f%%" %(n_pontos, fator*n_pontos))
print("%d espacos: %.2f%%" %(n_espacos,fator*n_espacos))
print("%d outros: %.2f%%" %(n_outros,fator*n_outros))
print("%d palindromos" %n_pa)
print("%d nao palindromos" %n_npa)
