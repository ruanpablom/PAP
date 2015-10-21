#!/usr/bin/env python
import random

strr = raw_input("Digite uma palavra: ")
lista = list(strr)
random.shuffle(lista)
print lista
strr = ''.join(lista)
print strr
