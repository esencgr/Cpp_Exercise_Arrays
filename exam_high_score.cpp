#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define NUM_STUDENTS 2
#define NUM_TESTS 3
using namespace std;
int get_highest(int a[][NUM_TESTS], int row, int col);
void matrix_print (int a[][NUM_TESTS],int row, int col);
int main()
{
   int grades[NUM_STUDENTS][NUM_TESTS] = { {55, 60, 65},
                                           {85, 90, 95} };
   int high_test;

   cout << " -- exam scores --" << endl;
   matrix_print (grades, NUM_STUDENTS, NUM_TESTS);
   cout << endl;

   high_test = get_highest( grades, NUM_STUDENTS, NUM_TESTS);
   cout << "high score = " << high_test << endl << endl ;


   return 0;

}

int get_highest(int a[][NUM_TESTS], int row, int col)

{
   int i, j;
   int highest = a[0][0];

   for( i = 0; i < row; i++)
      for( j = 0; j < col; j++)
         if ( a[i][j] > highest)
            highest = a[i][j];
   return highest;
}
void matrix_print (int a[][NUM_TESTS],int row,int col){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
             cout << "    " << a[i][j];
        }
    cout << endl;
    }
}
