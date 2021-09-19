#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

void printMatrix(int **matrix, int H, int W)
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void reverse(int **K, int H, int W)
{
    int **tempArr = new int *[H];
    
    for (int i = 0; i < H; i++)
    {   
        tempArr[i] = new int[W];
        for (int j = 0; j < W; j++)
        {
            tempArr[i][j] = K[i][j];
        }
    }
    
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            K[i][j] = tempArr[H-i-1][W-j-1];
        }
    }
}
int multiplyLocal(int **K,int Kh,int Kw, int **O, int currentI,int currentJ){
    int localResult =0;
    for(int i=0;i<Kh;i++){
        for(int j=0;j<Kw;j++){
            localResult += K[i][j]*O[currentI+i][currentJ+j];
        }
    }
    return localResult;
}
int main()
{
    //initilize matrix properties;
    int origin_height = 0, origin_width = 0, kernel_height = 0, kernel_width = 0;
    
    cin >> origin_height >> origin_width >> kernel_height >> kernel_width;
    int result_heigth = origin_height - kernel_height + 1;
    int result_width = origin_width - kernel_width + 1;
    //allocate and set origin matrix
    int **origin = new int *[origin_height];
    for (int i = 0; i < origin_height; i++)
    {
        origin[i] = new int[origin_width];
        for (int j = 0; j < origin_width; j++)
        {
            cin >> origin[i][j];
        }
    }
    
    //allocate and set kernel matrix
    int **kernel = new int *[kernel_height];
    for (int i = 0; i < kernel_height; i++)
    {
        kernel[i] = new int[kernel_width];
        for (int j = 0; j < kernel_width; j++)
        {
            cin >> kernel[i][j];
        }
    }
    // allocate result matrix
    int **result = new int *[result_heigth];
    for (int i = 0; i < result_heigth; i++)
    {
        result[i] = new int[result_width];
    }
    
    reverse(kernel, kernel_height, kernel_width);
        printMatrix(kernel,kernel_height,kernel_width);
    for(int i=0;i<result_heigth;i++){
        for(int j=0;j<result_width;j++){
            result[i][j]=multiplyLocal(kernel,kernel_height,kernel_width,origin,i,j);
        }
    }
    printMatrix(result,result_heigth,result_width);
    return 0;
}
