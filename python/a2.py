lista = [50 , 100 , 80 , 5 , 90 , 70 , 40 , 30 , 10 , 1 , 20]
print(lista)
print("Menor elemento da lista: ",min(lista))
print("Maior elemento da lista: ",max(lista))
print("Media da lista: ",sum(lista)/len(lista))
lista2 = lista[:]
lista2.sort()
lista2.reverse()
print("Ordenacao reversa da lista: ",lista2 )
