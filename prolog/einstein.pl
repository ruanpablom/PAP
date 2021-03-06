ao_lado(X,Y,List) :- nextto(X,Y,List).
ao_lado(X,Y,List) :- nextto(Y,X,List).

solucao(Casas,Dono_peixe) :-
    Casas = [_,_,_,_,_],
    nth0(0,Casas,casa(_,noruegues,_,_,_)),
    member(casa(vermelha,ingles,_,_,_),Casas),
    member(casa(_,sueco,cachorro,_,_),Casas),
    member(casa(_,dinamarques,_,cha,_),Casas),
    nextto(casa(verde,_,_,_,_),casa(branca,_,_,_,_),Casas),
    member(casa(verde,_,_,cafe,_),Casas),
    member(casa(_,_,passaros,_,pall_mall),Casas),
    member(casa(amarela,_,_,_,dunhill),Casas),
    nth0(2,Casas,casa(_,_,_,leite,_)),
    ao_lado(casa(_,_,_,_,blends),casa(_,_,gatos,_,_),Casas),
    ao_lado(casa(_,_,cavalos,_,_),casa(_,_,_,_,dunhill),Casas),
    member(casa(_,_,_,cerveja,bluemaster),Casas),
    member(casa(_,alemao,_,_,prince),Casas),
    ao_lado(casa(_,noruegues,_,_,_),casa(azul,_,_,_,_),Casas),
    ao_lado(casa(_,_,_,_,blends),casa(_,_,_,agua,_),Casas),
    member(casa(_,Dono_peixe,peixe,_,_),Casas).

