#include <iostream>

typedef long long lld; 
  
/* Strassen's Algorithm for matrix multiplication 
   Complexity:    O(n^2.808) */
  
inline lld** MatrixMultiply(lld** a, lld** b, int n, 
                                      int l, int m) 
{ 
    lld** c = new lld*[n]; 
    for (int i = 0; i < n; i++) 
        c[i] = new lld[m]; 
  
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            c[i][j] = 0; 
            for (int k = 0; k < l; k++) { 
                c[i][j] += a[i][k] * b[k][j]; 
            } 
        } 
    } 
    return c; 
} 


int main()
{
    // lld** matA; 
    // matA = new lld*[2]; 
    // for (int i = 0; i < 2; i++) 
    //     matA[i] = new lld[3]; 
    // matA[0][0] = 1; 
    // matA[0][1] = 2; 
    // matA[0][2] = 3; 
    // matA[1][0] = 4; 
    // matA[1][1] = 5; 
    // matA[1][2] = 6; 
    // // std::cout << **matA << std::endl;
    // lld** matB; 
    // matB = new lld*[3]; 
    // for (int i = 0; i < 3; i++) 
    //     matB[i] = new lld[2]; 
    // matB[0][0] = 7; 
    // matB[0][1] = 8; 
    // matB[1][0] = 9; 
    // matB[1][1] = 10; 
    // matB[2][0] = 11; 
    // matB[2][1] = 12; 
  
    // lld** matC = MatrixMultiply(matA, matB, 2, 3, 2); 
    // for (int i = 0; i < 2; i++) { 
    //     for (int j = 0; j < 2; j++) { 
    //         printf("%lld ", matC[i][j]); 
    //     } 
    //     printf("\n"); 
    // } 
    int n = 2;
    int l = 3;
    int m = 2;

    int adjN = (n >> 1) + (n & 1); 
    int adjL = (l >> 1) + (l & 1); 
    int adjM = (m >> 1) + (m & 1); 
    
    int j = 895; 

    int* j = new int; 
    *j = 895;
    std:: cout << *j << std::endl;
    return 0; 
}