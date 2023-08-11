#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int matriksa[4][4] = {{2,4,1,4},{5,1,4,6},{2,3,4,2},{8,4,8,4}}; 
    int matriksb[4][4] = {{3,6,8,2},{3,6,2,6},{4,7,9,2},{4,8,0,4}};
    int a11[2][2], a12[2][2], a21[2][2], a22[2][2];
    int b11[2][2], b12[2][2], b21[2][2], b22[2][2];

    cout << "Matriks A"<<endl;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << matriksa[i][j] << "     ";
        }
        cout << endl;
    }
    
    cout << "Matriks B"<<endl;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << matriksb[i][j] << "     ";
        }
        cout << endl;
    }

//mempartisi
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            a11[i][j] = matriksa[i][j];
            b11[i][j] = matriksb[i][j];
        }
        
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 2; j < 4; ++j)
        {
            a12[i][j] = matriksa[i][j];
            b12[i][j] = matriksb[i][j];
        }
        
    }
    
    for (int i = 2; i < 4; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            a21[i][j] = matriksa[i][j];
            b21[i][j] = matriksb[i][j];
        }
        
    }

    for (int i = 2; i < 4; ++i)
    {
        for (int j = 2; j < 4; ++j)
        {
            a22[i][j] = matriksa[i][j];
            b22[i][j] = matriksb[i][j];
        }
        
    }

//visualisasi partisi
    cout << "A11" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << a11[i][j] << "  ";
        }
        cout << endl;
    }
    
    cout << "A12" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << a12[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "A21" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << a21[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "A22" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << a22[i][j] << "  ";
        }
        cout << endl;
    }

    getch();
    return 0;

}