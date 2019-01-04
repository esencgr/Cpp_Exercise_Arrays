#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define size 10
using namespace std;

int main(){
    srand(time(NULL));
    int n[size];
    cout << "input data = ";
        for (int i=0; i<=size-1; i++){
            n[i] = 1 + rand() % 20;
            cout << n[i] << "  ";
        }
    cout << endl;
    cout << endl;
    cout << "elemnt\t" << "value\t" << "graphic"<< endl;

        for (int j=0; j<=size-1; j++){
            cout << j << "\t" << n[j] << "\t";

            for (int g=1; g<=n[j]; g++)
                cout << " * ";
        cout << endl;
        }

    return 0;
}
