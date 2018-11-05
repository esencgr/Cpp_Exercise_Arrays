#include <iostream>
#include <math.h>
using namespace std;

int day_number(string days[], string today){
    int count = 0;
    for (int i=0; i<7; i++){
        count++;
        if (today==days[i])
            break;
    }
return count;
}
void day_print (string days[],int total,int count){
        int index;
        if (total < 7)
           index = count + total - 1;
        else 
           index = (count + total - 1) % 7;
           
    cout <<" The day after " << total << " days --> " << days[index] << endl;
}

int main(){
    
    string today,days[7] ={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    int total,count;
    
    cout << " today is --> ";
    cin >> today;  
    count = day_number (days,today);
    cout << "today is " << count << ". day in the week.." << endl; 
    
    cout << " number of will pass days = " ;
    cin >> total;
    day_print (days,total,count);

return 0;
}
