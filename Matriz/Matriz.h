/*
 * Matriz.h
 *
 *  Created on: 17 de set de 2015
 *      Author: RuanPablo
 */

#ifndef MATRIZ_H_
#define MATRIZ_H_

template<class E, int rows, int cols>
class Matriz{
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
        template<E, int r, int c>

            template<int r,int c> 
            Matriz<E,cols,r> operator*(const Matriz<E,r,c> &b){
                Matriz<E,cols,r> retMat(0);
                E sum = 0;

                for(int k = 0 ; k < rows ; k++){
                    for(int i = 0; i < cols ; i ++){
                        for(int j = 0 ; j < cols ; j ++) {
                            sum+=(at(i,j)*b.at(j,i));
                        }
                        retMat.setValue(k,i,sum);
                        sum=0;
                    }
                }
                return retMat;
            }
        // rator*(const Matriz &b);
        //Matriz<E,row,cols>  operator^(const E &b);
        void printMatriz();
};

#endif /* MATRIZ_H_ */
