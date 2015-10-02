/*
 * Matriz.cpp
 *
 *  Created on: 17 de set de 2015
 *      Author: RuanPablo
 */

#include<iostream>
#include<stdlib.h>
#include "Matriz.h"


using namespace std;
/*
template<class E,int rows,int cols>
Matriz<E, rows, cols>::Matriz(E valor){
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			mat[i][j] = valor;
		}
	}
}*/

/*template<class E,int rows,int cols>
Matriz<E, rows, cols>::~Matriz(){
	delete[E] mat[rows][cols];
}*/
/*
template<class E,int rows,int cols>
void Matriz<E, rows, cols>::setValue(int row,int col, E value){
	this->mat[row][col] = value;
}*/
/*
template<class E,int rows,int cols>
E Matriz<E, rows, cols>::at(int row,int col){
	return this->mat[row][col];
}*/
/*
template<class E,int rows,int cols>
Matriz<E,rows,cols> Matriz<E, rows, cols>::operator+(Matriz<E,rows,cols> b){
	Matriz<E,rows,cols> retMat(0);
	for(int i = 0 ; i < rows ; i ++){
		for(int j = 0 ; j < cols ; j ++) {
			retMat.setValue(i,j, at(i,j)+b.at(i,j));
		}
	}
	return retMat;
}*/
/*
template<class E,int rows,int cols>
Matriz<E,rows,cols> Matriz<E, rows, cols>::operator-(Matriz<E,rows,cols> b){
	Matriz<E,rows,cols> retMat(0);
	for(int i = 0 ; i < rows ; i ++){
		for(int j = 0 ; j < cols ; j ++) {
			retMat.setValue(i,j, at(i,j)-b.at(i,j));
		}
	}
	return retMat;
}
*/
/*
template<class E, int rows, int cols>
Matriz<E,rows,cols> Matriz<E,rows,cols>::operator-(){
	Matriz<E,rows,cols> retMat(0);
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			retMat.setValue(i,j,-at(i,j));
		}
	}
	return retMat;
}*/

/*template<class E,int rows,int cols>
void Matriz<E, rows, cols>::printMatriz(){
	for(int i = 0 ; i < rows ; i ++){
		for(int j = 0 ; j < cols ; j ++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
*/



/*template<class E,int rows,int cols>
Matriz<E,rows,cols> Matriz<E, rows, cols>::operator^(const E& b){
	Matriz<E,rows,cols> retMat(0);
	E sum = 0;

	for(int k = 0 ; k < rows ; k++){
		for(int i = 0; i < cols ; i ++){
			for(int j = 0 ; j < cols ; j ++) {
				sum+=(at(i,j)*retMat.at(j,i));
			}
			retMat.setValue(k,i,sum);
			sum=0;
		}
	}

	return retMat;
}*/


/*
template<class E, int rows, int cols>
Matriz<E,rows,cols> Matriz<E,rows,cols>::operator*(const E &b){
	Matriz<E,rows,cols> retMat(0);
	for(int i = 0 ; i < rows ; i++){
		for(int j = 0 ; j < cols ; j++){
			retMat.setValue(i,j,b*at(i,j));
		}
	}
	return retMat;
}
*/


int main(){
	Matriz<int,3,3> a(7);
	Matriz<int,3,3> b(1);

	a.printMatriz();
	b.printMatriz();

	//(a+b).printMatriz();
	//(b-a).printMatriz();
	(a^2).printMatriz();

	//(-a).printMatriz();
	//system("pause");
	return 0;
}
