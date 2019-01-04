#include <iostream>
using namespace std;
int main() {
  cout << "hello world" << endl;
  int number;
  cin >> number;

      if (number == 5)
          cout << "number = 5 " << endl;
      else
          cout << "number =! 5" << endl;

  cout << "işlem devam etsin mi (y=1)?" << endl;
  int num;
  cin >> num;
  if (num == 1) {
      cout << "döngüye giriliyor"<< endl;

      for (int i=0; i<10; i++){
            if (i%4)
              cout << i << " ";
            else
              cout << endl;
      }
   }
}
