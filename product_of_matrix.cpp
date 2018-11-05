#include <iostream>
#include <math.h> 
#include <time.h>
#include <stdlib.h>
#define I 2
#define J 4
#define K 3
using namespace std;

int main()
{
    srand(time(NULL));
    
    int a[I][K], b[K][J];
    
    cout << "--a array--" << endl;
    for (int i=0; i<I; i++){
        for (int j=0; j<K; j++){
             a[i][j] = 1 + rand() % 9; 
             cout << a[i][j] << "\t";
        }
    cout << endl;
    }
    
    cout << "--b array--" << endl;
    for (int i=0; i<K; i++){
        for (int j=0; j<J; j++){
             b[i][j] = 1 + rand() % 10; 
             cout << b[i][j] << "\t";
        }
    cout << endl;
    }
    
    cout << " -- matrix product --" << endl;
    int  c[I][J];
    int sum;
    for (int i=0; i<I; i++){
        for (int j=0; j<J; j++){
            sum = 0;
            for (int k=0; k<K; k++){
                sum += a[i][k] * b[k][j];
            }
         
        c[i][j] = sum;
        cout << "   " << c[i][j];
        }
    cout << endl;
    } 
return 0;   
}