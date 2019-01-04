#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main(){
    srand(time(NULL));

    int size;
    cout << "enter the size of array = ";
    cin >> size;

    cout << "array = ";
    int a[size];
        for (int i=0; i<=size-1; i++){
            a[i] = 1 + rand() % 20;
            cout << a[i] << " ";
        }
    cout << endl;

    int max1 = a[0];
    int max2 = a[1];
    int max3 = a[2];
         for (int i=0; i<=size-1; i++){
              if (a[i] > max1){
                  max3 = max2;
                  max2 = max1;
                  max1 = a[i];
              }
              else if (a[i] > max2){
                  max3 = max2;
                  max2 = a[i];
              }
              else if (a[i] > max3)
                  max3 = a[i];
         }
    cout << "greatest 3 number = "<< max1 << "," << max2 << "," << max3 << endl;
    return 0;
}
