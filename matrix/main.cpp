#include <iostream>
using namespace std;

int main()
{
    int Am[50][50], Bm[50][50], mult[50][50], r1, c1, r2, c2, i, j, k;

    cout << "Enter number of rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter number of  rows and columns for second matrix: ";
    cin >> r2 >> c2;

    //order check karna hai if order galat hai then return error
    while (c1!=r2)
    {
        cout << "wrong order";

        cout << "Enter number of rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter number of rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // A matrix fill
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "enter a" << i + 1 << j + 1 << " : ";
            cin >> Am[i][j];
        }

    // B matrix
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "enter b" << i + 1 << j + 1 << " : ";
            cin >> Bm[i][j];
        }

    // multipication matrix initilase everthying to zero
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // multiply '''' last strep
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += Am[i][k] * Bm[k][j];
            }

    // output
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}
