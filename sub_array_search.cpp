#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define size1 5
#define size2 2

using namespace std;

int main(){
    srand(time(NULL));
    
    int n[size1], s[size2] , count = 0;
    cout << "array-1 = "; 
        for (int i=0; i<=size1-1; i++){
            n[i] = 1 + rand() % 6;
            cout << n[i] << "  ";
        }
    cout << endl;

    cout << "array-2 = ";
        for (int i=0; i<=size2-1; i++){
            s[i] = 1 + rand() % 6;
            cout << s[i] << "  ";
        }
    cout << endl;
    
    cout << " -- sub-array search -- " << endl;
        for (int j=0; j<=size2-1; j++){
            for (int i=0; i<=size1-1; i++){
                if ( n[i] == s[j])
                    count++;
            }
        }  
      if (count == size2)
         cout << "array-2 is sub-array of array-1 .." << endl;
      else
         cout << "array-2 is NOT sub-array of array-1 .." << endl;
    cout << endl;
return 0;
}