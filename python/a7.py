#!/usr/bin/env python
class racional:
    def __init__(self,numerador=0,denominador=1):
        if(denominador == 0):
            raise Exception('O denominador deve ser diferente de zero!')
        self.numerador = numerador
        self.denominador = denominador
    def show(self):
        if self.denominador != 1:
            print("%d/%d" %(self.numerador,self.denominador))
        else:
            print("%d" %self.numerador)
    def simp(self):
        a = self.mdc()
        e = racional(self.numerador / a , self.denominador / a)
        return e
    def mdc(self,a=0,b=0):
        if(b==0):
            b = abs(self.numerador)
            a = abs(self.denominador)
        if b > a:
            aux = a
            a = b
            b=a
        while(b > 0):
            r=a%b
            a=b
            b=r
        return a

    def __add__(a,b):
        c = a.denominador
        d = b.denominador
        m=c*d
        c = a.numerador*(m/c)
        d = b.numerador*(m/d)
        e = racional(c+d,m)
        return e.simp()
    def __sub__(a,b):
        c = a.denominador
        d = b.denominador
        m=c*d
        c = a.numerador*(m/c)
        d = b.numerador*(m/d)
        e = racional(c-d,m)
        return e.simp()
    def __mul__(a,b):
        return racional(a.numerador*b.numerador,a.denominador*b.denominador)
    def __div__(a,b):
        e = racional(a.numerador*b.denominador,b.numerador*a.denominador)
        return e 
a = racional(1,4)
b = racional(-3,4)
(a+b).show()
(a-b).show()
(a*b).show()
(a/b).show()
