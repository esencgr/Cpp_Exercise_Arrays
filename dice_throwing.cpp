#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define size 7
using namespace std;

int main(){
    srand(time(NULL));
    int value;
    int frequency[size] = {0};
        for (int i=1; i<=6000; i++){
            value = 1 + rand() % 6;
            ++frequency[value];
        }
    cout << "value\t" << "frequency"<< endl; 
        
        for (int value=1; value<=size-1; value++)
            cout << value << "\t" << frequency[value] << endl;         
 
    return 0;
}