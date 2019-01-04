#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int size;
    cout << "enter array's size =";
    cin >> size;

    int a[size][size], b[size][size];

    cout << "--a array--" << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
             a[i][j] = 1 + rand() % 9;
             cout << a[i][j] << "\t";
        }
    cout << endl;
    }

    cout << "--b array--" << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
             b[i][j] = 1 + rand() % 10;
             cout << b[i][j] << "\t";
        }
    cout << endl;
    }

    cout << "--sum of arrays--" << endl;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
             a[i][j] += b[i][j];
             cout << a[i][j] << "\t";
        }
    cout << endl;
    }

    return 0;
}
