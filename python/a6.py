#!/usr/bin/env python
import itertools

ordem = 3
vm = 9
vet = []
vet2 = []
linha = 0
coluna = 0

for i in range(0,ordem): 
    vet2.append(1)
for i in range(0,ordem):
    vet.append(list(vet2))


def checkVet(vet_aux):
    valorL = 0
    valorC = 0
    c = False
    diag = 0
    #print(vet_aux)
    for i in range(0,ordem):
        diag = diag + vet_aux[i][i]

    for k in range(0,ordem):
        for i in range(0,ordem):
            valorL = valorL + vet_aux[k][i]
        if valorL != diag:
            return -1
        valorL=0
        for i in range(0,ordem):
            valorC = valorC + vet_aux[i][k]
        if valorC != diag:
            return -1
        valorC=0
    for i in range(0,ordem):
        print(vet_aux[i])
    print("\n")

def hadouken(matriz): 
    b = [1,2,3,4,5,6,7,8,9]
    a = itertools.product(b,repeat=9)
    while(True):
        try:
            vetaux = list(a.__next__())   
        except StopIteration:
            break
        for j in range(0,ordem):
            matriz[j] = vetaux[(j*ordem):(j*ordem)+ordem]
            #print(matriz)
        checkVet(matriz)

hadouken(list(vet))
