% A solu��o � uma lista de casas, sendo que cada casa tem a forma:
% mundo( casa1, casa2, casa3, casa4, casa5 )			%% nosso mundo � composto por 5 casas
% casa(cor, nacionalidade, animal, bebida, cigarro)		%% para cada casa consideramos as seguintes caracter�sticas


%%% TESTE DE QI DE EINSTEIN ::::: Condi��es
%( 1) O Noruegu�s vive na primeira casa.
%( 2) O Ingl�s vive na casa Vermelha.
%( 3) O Sueco tem Cachorros como animais de estima��o.
%( 4) O Dinamarqu�s bebe Ch�.
%( 5) A casa Verde fica do lado esquerdo da casa Branca.
%( 6) O homem que vive na casa Verde bebe Caf�.
%( 7) O homem que fuma Pall Mall cria P�ssaros.
%( 8) O homem que vive na casa Amarela fuma Dunhill.
%( 9) O homem que vive na casa do meio bebe Leite.
%(10) O homem que fuma Blends vive ao lado do que tem Gatos.
%(11) O homem que cria Cavalos vive ao lado do que fuma Dunhill.
%(12) O homem que fuma BlueMaster bebe Cerveja.
%(13) O Alem�o fuma Prince.
%(14) O Noruegu�s vive ao lado da casa Azul.
%(15) O homem que fuma Blends � vizinho do que bebe �gua.


% Nas condi��es existe algumas preposi��o que falam sobre um morador morar do lado de outro.
% Isso implica que precisamos considerar que este morador mora ou na esquerda ou na direita 
% do outro morador. Para tanto criamos uma regra para determinar se X est� ao lado de Y
ao_lado(X, Y, List) :- nextto(X, Y, List). % X � esquerda de Y
ao_lado(X, Y, List) :- nextto(Y, X, List). % Y � esquerda de X



solucao(Casas, Dono_Peixe) :-
    Casas = [_, _, _, _, _], 									% a solucao � uma lista com 5 elementos
    nth0( 0, Casas, casa(_,noruegues,_,_,_) ),					% Condi��o 1: o noruegues mora na primeira casa, ou seja, ele � o primeiro elemento da lista
	member(casa(vermelha, ingles, _, _, _), Casas), 			% Condi��o 2: o ingles vive na casa vermelha e essa casa, obviamente, faz parte da solu��o
    member(casa(_, sueco, cachorro, _, _), Casas), 				% Condi��o 3: o sueco tem cachorro e a casa onde eles moram tamb�m faz parte da solu��o
	% (...)
	nextto(casa(verde,_,_,_,_), casa(branca,_,_,_,_), Casas),	% Condi��o 5: a casa Verde fica do lado esquerdo da casa Branca.
	% (...)
	ao_lado(casa(_,_,_,blends,_), casa(_,_,_,_,gato), Casas),	% Condi��o 10: o homem que fuma Blends vive ao lado do que tem Gatos.
	% (...)
	
	
	
