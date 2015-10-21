#!/usr/bin/env python
#-*-coding:iso-8859-1 -*-

strrr = raw_input('Digite uma palavra: ')
#print strrr
str1 = strrr.upper()
str1 = str1.replace(" ","")
if(str1[::-1] == str1):
    print("É Palindromo!")
else:
    print("Não é palindromo")

