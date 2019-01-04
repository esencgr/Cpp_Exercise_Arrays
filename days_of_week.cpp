#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int total,index,count=0;
    string today,x;
    string days[7] ={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    cout << " today is --> ";
    cin >> today;

    for (int i=0; i<7; i++){
        count++;
        if (today==days[i])
            break;
    }
    cout << " today is " << count << ". day in week" << endl;

    cout << " number of will pass days = " ;
    cin >> total;

       if (total < 7)
           index = count + total-1;
       else
           index = (count + total-1) % 7;

    cout <<" The day after " << total << " days --> " << days[index] << endl;
return 0;
}
