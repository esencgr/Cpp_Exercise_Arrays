#include <iostream>
using namespace std;
void array_static(void);
void array_automatic(void);
int main(){
    cout << "--first call to all functions--" << endl;
    array_static();
    array_automatic();
    cout << "\n--second call to all functions--" << endl;
    array_static();
    array_automatic();
return 0;
}
void array_automatic(void){
    int a[3]={1,2,3};
    cout << "\nautomatic array function initial value = " << endl;
    for (int i=0; i<3; i++)
        cout << a[i] << " ";
    cout << "\nautomatic  array function final value = " << endl;
    for (int i=0; i<3; i++){
        a[i]+=5;
        cout << a[i] << " ";
    }
     cout << endl;    
}
void array_static(void){
    static int a[3];
    cout << "\nstatic array function initial value = " << endl;
    for (int i=0; i<3; i++)
        cout << a[i] <<" ";
    cout << "\nstatic array function final value = " << endl;
    for (int i=0; i<3; i++){
        a[i]+=5;
        cout << a[i] << " ";
    }
    cout << endl;
}