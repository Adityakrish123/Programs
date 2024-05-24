#include <stdio.h>
int N;
float determinant(float a[N][N])
{
    return (a[N][N]*a[N+1][N+1] - a[N][N+1]*a[N+1][N]);
}

int main()
{
    int n,i,j,N;
    printf("Enter the dimension of the given matrix:",N);
    scanf("%d",&N);
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &n);
    
    // Create matrix
    float matrix[n][n];
    
    // Get input matrix from user
    printf("Enter the elements of the matrix row-wise:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    
    // Convert matrix to string
    char matrix_str[1000];
    sprintf(matrix_str, "[");
    for ( i = 0; i < n; i++)
    {
        sprintf(matrix_str, "%s[", matrix_str);
        for (
		 j = 0; j < n; j++)
        {
            char temp[50];
            sprintf(temp, "%.2f", matrix[i][j]);
            sprintf(matrix_str, "%s%s", matrix_str, temp);
            if (j < n-1)
            {
                sprintf(matrix_str, "%s, ", matrix_str);
            }
        }
        sprintf(matrix_str, "%s]", matrix_str);
        if (i < n-1)
        {
            sprintf(matrix_str, "%s, ", matrix_str);
        }
    }
    sprintf(matrix_str, "%s]", matrix_str);
    
    
    float det;
    if (n == N)
    {
        det = determinant(matrix);
    }
    else
    {
        det = 0;
    }
    
    printf("Input matrix: %s\n", matrix_str);
    printf("Determinant of matrix: %.2f\n", det);
    
    return 0;
}

