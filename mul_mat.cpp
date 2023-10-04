
#include <iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], c[100][100] = {0}, i, j, k, n, n1, n2, n3;
    cout << "Enter no of row of first matrix:";
    cin >> n;
    cout << "Enter no of column of first matrix:";
    cin >> n1;
    cout << "Enter no of row of second matrix:";
    cin >> n2;
    cout << "Enter no of column of second matrix:";
    cin >> n3;
    if (n1 == n2)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n1; j++)
            {
                cout << "Enter elements of first matrix:" << i << j << "\n";
                cin >> a[i][j];
            }
        }
        for (i = 1; i <= n2; i++)
        {
            for (j = 1; j <= n3; j++)
            {
                cout << "Enter elements of second matrix:" << i << j << "\n";
                cin >> b[i][j];
            }
        }

    /*
C[i][j] =  A[1][1] * B[1][1] 
         + A[1][2] * B[2][1] 
         + A[1][3] * B[3][1]

C[i][j] =  A[1][1] * B[1][2] 
         + A[1][2] * B[2][2] 
         + A[1][3] * B[3][2]

C[i][j] =  A[1][1] * B[1][3] 
         + A[1][2] * B[2][3] 
         + A[1][3] * B[3][3]
    


C[i][j] =  A[2][1] * B[1][1] 
         + A[2][2] * B[2][1] 
         + A[2][3] * B[3][1]

C[i][j] =  A[2][1] * B[1][2] 
         + A[2][2] * B[2][2] 
         + A[2][3] * B[3][2]

C[i][j] =  A[2][1] * B[1][3] 
         + A[2][2] * B[2][3] 
         + A[2][3] * B[3][3]



C[i][j] =  A[3][1] * B[1][1] 
         + A[3][2] * B[2][1] 
         + A[3][3] * B[3][1]
         
C[i][j] =  A[3][1] * B[1][2] 
         + A[3][2] * B[2][2] 
         + A[3][3] * B[3][2] 

C[i][j] =  A[3][1] * B[1][3] 
         + A[3][2] * B[2][3] 
         + A[3][3] * B[3][3]   
  


conclusion is like this ---->
C[i][j] = A[i][1] * B[1][j]
C[i][j] = A[i][2] * B[2][j]
C[i][j] = A[i][3] * B[3][j]

we take one more variable (k) // but what is the existance of k or what is the value of k here
so we take a loop again for(k=1; k<=3; k++)

C[i][j] = A[i][k] * B[k][j]
C[i][j] = A[i][k] * B[k][j]
C[i][j] = A[i][k] * B[k][j]

so final is ---> C[i][j] = A[i][k] * B[k][j];
*/

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n3; j++)
            {
                for (k = 1; k <= n; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        cout << "Multiplication of matrix [a x b] is:"
        << "\n";
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n3; j++)
            {
                cout << c[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    else
    {
        cout<< "matrix multiplication cannot be possible";
    }
    return 0;
}
