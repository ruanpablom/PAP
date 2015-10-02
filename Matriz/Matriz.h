/*
 * Matriz.h
 *
 *  Created on: 17 de set de 2015
 *      Author: RuanPablo
 */

#ifndef MATRIZ_H_
#define MATRIZ_H_

using namespace std;

template<class E, int rows, int cols>
class Matriz{
    private:
        E mat[rows][cols];
    public:
        Matriz(E valor){
            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < cols ; j++){
                    mat[i][j] = valor;
                }
            }
        }

        //~Matriz();
        void setValue(int row,int col, E value){
            this->mat[row][col] = value;
        }

        E at(int row, int col){
            return this->mat[row][col];
        }

        Matriz<E,rows,cols> operator+(Matriz<E,rows,cols> b){
            Matriz<E,rows,cols> retMat(0);
            for(int i = 0 ; i < rows ; i ++){
                for(int j = 0 ; j < cols ; j ++) {
                    retMat.setValue(i,j, at(i,j)+b.at(i,j));
                }
            }
            return retMat;
        }
        Matriz<E,rows,cols> operator-(Matriz<E,rows,cols> b){  
            Matriz<E,rows,cols> retMat(0);
            for(int i = 0 ; i < rows ; i ++){
                for(int j = 0 ; j < cols ; j ++) {
                    retMat.setValue(i,j, at(i,j)-b.at(i,j));
                }
            }
            return retMat;
        }

        Matriz<E,rows,cols> operator-(){
            Matriz<E,rows,cols> retMat(0);
            for(int i = 0 ; i < rows ; i++){
                for(int j = 0 ; j < cols ; j++){
                    retMat.setValue(i,j,-at(i,j));
                }
            }
            return retMat;
        }


        template<int r,int c> 
            Matriz<E,cols,r> operator*(const Matriz<E,r,c> &b){
                if(verifica(rows,c)){
                
                Matriz<E,cols,r> retMat(0);
                E sum = 0;

                for(int k = 0 ; k < rows ; k++){
                    for(int i = 0; i < cols; i ++){
                        for(int j = 0 ; j < r; j ++) {
                            sum+=(at(i,j)*b.at(j,i));
                        }
                        retMat.setValue(k,i,sum);
                        sum=0;
                    }
                }
                return retMat;
                }else{
                    cout<<"Matrizes inválidas,  número de linhas diferente do número de colunas!"<<endl;
                }
            }

        Matriz<E,rows,cols>  operator^(const E &b){
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
        }

        void printMatriz(){
            for(int i = 0 ; i < rows ; i ++){
                for(int j = 0 ; j < cols ; j ++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }

        bool verifica(int c1, int r2){
            if(c1==r2)return true;
            else return false;
        }
};

#endif /* MATRIZ_H_ */
