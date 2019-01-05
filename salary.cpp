#include<iostream>
#include<math.h>
using namespace std;
int main(){

int pay_code,managers=0,h_workers=0,c_workers=0,p_workers=0 ;
double  m_salary, h_salary, c_salary, p_salary;
double pay;
int hours,pieces;
cout << "enter paycode (-1 to exit):";
cin >> pay_code;

   while(pay_code != -1){

   	  switch (pay_code){

   	    case 1:
   	  	    cout << "Enter manager weekly salary:";
   	        cin >> m_salary;
   	        cout << "The manager pay is "<< m_salary << "$"<< endl;
   	  	    managers++;
   	    break;

   	    case 2:
   	  	    cout << "Enter hourly worker's hourly salary:";
   	  	    cin >> h_salary;
   	  	    cout << "Enter the total hours worked:";
   	  	    cin >> hours;
   	  	       if (hours > 40)
   	  	        pay = (40*h_salary) + ((hours-40) * 1.5 * h_salary);
   	  	       else
   	  	        pay = (hours * h_salary);
   	  	    cout<< "The hoursly worker pay is "<< pay << "$" << endl;
   	        h_workers++;
   	  	break;

        case 3:
   	  	    cout<< "Enter gross weekly sales:";
   	  	    cin >> c_salary;
   	        pay = 250.0 + c_salary * (0.057);
   	       	cout<< "The commission worker pay is "<< (double)pay << "$" <<endl;
   	      	c_workers++;
   	  	break;

   	    case 4:
	        	cout << "enter number of pieces:";
		        cin >> pieces;
		        cout << "enter wage per piece:";
	         	cin >> p_salary;
		        pay = pieces * (p_salary);
	          cout << "The piece  worker pay is "<< (double)pay << "$" << endl;
   	  	    p_workers++;
   	  	break;

   	    default:
   	        cout << " invalid paycode ";
   	  	break;

	  }
   cout << endl;
   cout << "enter paycode (-1 to exit):";
   cin >> pay_code;
   }
cout << endl << endl;
cout <<"Total number of menagers :"  << managers << endl;
cout <<"Total number of h_workers :" << h_workers<< endl;
cout <<"Total number of c_workers :" << c_workers<< endl;
cout <<"Total number of p_workers :" << p_workers<< endl;

}
