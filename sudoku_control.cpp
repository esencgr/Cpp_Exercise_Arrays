#include <iostream>
#define size 9
using namespace std;

int line_control(int sudo[size][size]);   
int column_control(int sudo[size][size]);
int cell_control(int sudo[size][size]); 
    
int main(){
    int sudoku[size][size] = {{ 9,4,1,3,2,6,7,5,8 },
                              { 6,3,7,1,5,8,2,4,9 }, 
                              { 8,2,5,4,9,7,6,1,3 },
                              { 2,6,8,7,1,4,3,9,5 },
                              { 1,7,4,5,3,9,8,6,2 },
                              { 3,5,9,6,8,2,4,7,1 },
                              { 4,1,3,2,6,5,9,8,7 },
                              { 5,9,6,8,7,3,1,2,4 },
                              { 7,8,2,9,4,1,5,3,6 }};
    
    cout << "sudoku control start.." << endl;                          
    cout << "sudoke solution is = " << endl;
    
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            cout << "\t " << sudoku[i][j] ;
        }
        cout << endl;
    } 
    
    int correct_line, correct_column,correct_cell, correct;
    correct_line = line_control(sudoku); 
    correct_column = column_control(sudoku);
    correct_cell = cell_control(sudoku);
    
    if (correct_line == 1 && correct_column == 1 && correct_cell == 1)
        correct = 1;
    else
        correct=0;
        
    if (correct==1)
        cout << "Solution is correct" << endl;
    else  
        cout << "Solution is wrong" << endl;
 
    return 0;
}

int line_control (int sudo[size][size]){
    
    int control_value, state;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            control_value = sudo[i][j];
            for (int k=0; k<size; k++){
                if(control_value == sudo[i][k] && k!=j)
                   state = 0;
                else 
                   state = 1;
            }
        }
    }
    return state;
} 
int column_control (int sudo[size][size]){
    
    int control_value, state;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            control_value = sudo[i][j];
            for (int k=0; k<size; k++){
                if(control_value == sudo[k][j] && i!=k)
                   state = 0;
                else 
                   state = 1;
            }
        }
    }
    return state;
} 

int cell_control(int sudo[size][size]){
    int control_value, state, line_cell, column_cell;
    
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            
            control_value = sudo[i][j];
            line_cell  = i / 3;
            column_cell = j / 3;
            
            for(int k = line_cell;  k < ((line_cell*3)+3);  k++){
                for (int c = column_cell;  c < ((column_cell*3)+3);  c++){
                    if (control_value == sudo[k][c]  &&  i!=k  &&  j!=c)
                        state = 0;
                    else 
                        state = 1;
                }
            }
        }
        
    }
    return state;
}