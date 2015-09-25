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
		int l;
		int c;
	public:
		Matriz(E valor);
		//~Matriz();
		void setValue(int row,int col, E value);
		E at(int row, int col);
		Matriz<E,rows,cols> operator+(Matriz<E,rows,cols> b);
		Matriz<E,rows,cols> operator-(Matriz<E,rows,cols> b);
		//Matriz<E,rows,cols> operator+(Matriz b);
		Matriz<E,rows,cols> operator*(Matriz<E,rows,cols> b);
		int getLinha();
		int getColuna();
		void printMatriz();
};

#endif /* MATRIZ_H_ */
