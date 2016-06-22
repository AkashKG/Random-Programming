#include<iostream>
using namespace std;

class Matrix{
    int row;
    int col;
    int **matrix;
    bool *rowArr;
    bool *colArr;
public:
    Matrix(int row, int col);
    void convertAndPrint();
    ~Matrix(){
        delete matrix;
        delete rowArr;
        delete colArr;
    }
};

Matrix::Matrix(int row, int col){
    this->row = row;
    this->col = col;
    matrix = new int *[this->row];
    rowArr = new bool [this->row];
    colArr = new bool [this->col];
    for(int i=0;i<this->row;i++){
        matrix[i]=new int[col];
        rowArr[i]=false;
    }
    for(int i=0;i<this->col;i++)
        colArr[i]=false;

    for(int i=0;i<this->row;i++){
        for(int j=0;j<this->col;j++){
            cin>>matrix[i][j];
            if(!matrix[i][j]){
                rowArr[i]=true;
                colArr[j]=true;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Matrix::convertAndPrint(){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(rowArr[i]|colArr[j]){
                matrix[i][j]=0;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    Matrix *M = new Matrix(4,4);
    M->convertAndPrint();
    delete M;
    return 0;
}
