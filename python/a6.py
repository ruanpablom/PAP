#!/usr/bin/env python
ordem = 3
vm = 9
vet = []
vet2 = []
linha = 0
coluna = 0

for i in range(0,ordem): vet2.append(1)
for i in range(0,ordem):
    vet.append(list(vet2))


def checkVet(vet_aux):
    valorL = 0
    valorC = 0
    c = False
    diag = 0

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
        print(vet[i])
    print("\n")

def hadouken(matriz):
    vetaux = []
    j=0
    for i in range(0,ordem):
        for j in range(0,ordem):
            vetaux.append(matriz[i][j])
    print(j)
    while(j!=-1):
        vetatual = 0
        for j in range(0,vm):
            vetaux[ordem*ordem-1] = j
            for i in range(0,ordem*ordem):
                for k in range(0,ordem*ordem):
                    matriz[i][j] = vetaux[vetatual]
                    vetatual+=1
            checkVet(matriz)
        vetaux[ordem*ordem-1]=0
        for j in (ordem*ordem-2,-1,-1):
            if(vetaux[j] < vm-1):
                vetaux[j]+=1
                break
            else:
                vetaux[j]=0
                continue

hadouken(vet.copy())
