% A solução é uma lista de casas, sendo que cada casa tem a forma:
% mundo( casa1, casa2, casa3, casa4, casa5 )			%% nosso mundo é composto por 5 casas
% casa(cor, nacionalidade, animal, bebida, cigarro)		%% para cada casa consideramos as seguintes características


%%% TESTE DE QI DE EINSTEIN ::::: Condições
%( 1) O Norueguês vive na primeira casa.
%( 2) O Inglês vive na casa Vermelha.
%( 3) O Sueco tem Cachorros como animais de estimação.
%( 4) O Dinamarquês bebe Chá.
%( 5) A casa Verde fica do lado esquerdo da casa Branca.
%( 6) O homem que vive na casa Verde bebe Café.
%( 7) O homem que fuma Pall Mall cria Pássaros.
%( 8) O homem que vive na casa Amarela fuma Dunhill.
%( 9) O homem que vive na casa do meio bebe Leite.
%(10) O homem que fuma Blends vive ao lado do que tem Gatos.
%(11) O homem que cria Cavalos vive ao lado do que fuma Dunhill.
%(12) O homem que fuma BlueMaster bebe Cerveja.
%(13) O Alemão fuma Prince.
%(14) O Norueguês vive ao lado da casa Azul.
%(15) O homem que fuma Blends é vizinho do que bebe Água.


% Nas condições existe algumas preposição que falam sobre um morador morar do lado de outro.
% Isso implica que precisamos considerar que este morador mora ou na esquerda ou na direita 
% do outro morador. Para tanto criamos uma regra para determinar se X está ao lado de Y
ao_lado(X, Y, List) :- nextto(X, Y, List). % X à esquerda de Y
ao_lado(X, Y, List) :- nextto(Y, X, List). % Y à esquerda de X



solucao(Casas, Dono_Peixe) :-
    Casas = [_, _, _, _, _], 									% a solucao é uma lista com 5 elementos
    nth0( 0, Casas, casa(_,noruegues,_,_,_) ),					% Condição 1: o noruegues mora na primeira casa, ou seja, ele é o primeiro elemento da lista
	member(casa(vermelha, ingles, _, _, _), Casas), 			% Condição 2: o ingles vive na casa vermelha e essa casa, obviamente, faz parte da solução
    member(casa(_, sueco, cachorro, _, _), Casas), 				% Condição 3: o sueco tem cachorro e a casa onde eles moram também faz parte da solução
	% (...)
	nextto(casa(verde,_,_,_,_), casa(branca,_,_,_,_), Casas),	% Condição 5: a casa Verde fica do lado esquerdo da casa Branca.
	% (...)
	ao_lado(casa(_,_,_,blends,_), casa(_,_,_,_,gato), Casas),	% Condição 10: o homem que fuma Blends vive ao lado do que tem Gatos.
	% (...)
	
	
	
