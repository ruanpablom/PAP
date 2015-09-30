/*
 * Matriz.h
 *
 *  Created on: 17 de set de 2015
 *      Author: RuanPablo
 */

#ifndef MATRIZ_H_
#define MATRIZ_H_

template<class E, int rows, int cols>
class Matriz {
	private:
		E mat[rows][cols];
	public:
		Matriz(E valor);
		//~Matriz();
		void setValue(int row,int col, E value);
		E at(int row, int col);
		//Matriz<E,rows,cols> operator+(Matriz<E,rows,cols> b);
		//Matriz<E,rows,cols> operator-(Matriz<E,rows,cols> b);
		//Matriz<E,rows,cols> operator-();
	        //Matriz<E,rows,cols> operator*(const E &b);
		Matriz operator*(const Matriz &b);
		//Matriz<E,row,cols>  operator^(const E &b);
		void printMatriz();
};

#endif /* MATRIZ_H_ */
