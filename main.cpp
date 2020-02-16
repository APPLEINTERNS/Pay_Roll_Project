
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // Information about the project
    cout <<"\tDescription: Group project" << endl;
    cout <<"\tProject: Output Format Paroll" << endl;
    cout <<"\tProgrammers: Tordenzil, Shavaun, Han Jae, and David" << endl;
    cout <<"\tLast Modified: 02/15/2020" << endl;
    cout << endl;
    cout << endl;
    
    // Variable for hours work
    int hours_work1,hours_work2,hours_work3,hours_work4,hours_work5;
    
    // Variable for Pay rates
    double pay_rate1, pay_rate2, pay_rate3, pay_rate4,pay_rate5;
    
    const int LENGTH1 = 13, // control space between column of the first row
              LENGTH2 = 24, // control space between column of the second row
              LENGTH3 = 17, // control space between column of the third row
              LENGTH4 = 15,  // control space between column of the forth row
              LENGTH5 = 20; // space between the lable of the table
    
    
    // Display output for the user and take information from the user
    cout << "Hours work employee #1 [Only whole hours will be credited]: ";
    cin >> hours_work1;
    cin.ignore(100, '\n'); // ignore decimal numbers when whole is expected
    cout << "Hourly Pay rate for employee # 1 [not necesserily the whole dollars]: ";
    cin >> pay_rate1;
    cin.ignore(); // Igonre characters after the number is entered
    cout << endl;
    
    cout << "Hours work employee #2 [Only whole hours will be credited]: ";
    cin >> hours_work2;
    cin.ignore(100, '\n'); // ignore decimal numbers when whole is expected
    cout << "Hourly Pay rate for employee #2 [not necesserily the whole dollars]: ";
    cin >> pay_rate2;
    cin.ignore(); // Igonre characters after the number is entered
    cout << endl;
    
    cout << "Hours work employee #3 [Only whole hours will be credited]: ";
    cin >> hours_work3;
    cin.ignore(100, '\n'); // ignore decimal numbers when whole is expected
    cout << "Hourly Pay rate for employee #3 [not necesserily the whole dollars]: ";
    cin >> pay_rate3;
    cin.ignore(); // Igonre characters after the number is entered
    cout << endl;
    
    cout << "Hours work employee #4 [Only whole hours will be credited]: ";
    cin >> hours_work4;
    cin.ignore(100, '\n'); // ignore decimal numbers when whole is expected
    cout << "Hourly Pay rate for employee #4 [not necesserily the whole dollars]: ";
    cin >> pay_rate4;
    cin.ignore(); // Igonre characters after the number is entered
    cout << endl;
    
    cout << "Hours work employee #5 [Only whole hours will be credited]: ";
    cin >> hours_work5;
    cin.ignore(100, '\n'); // ignore decimal numbers when whole is expected
    cout << "Hourly Pay rate for employee #5 [not necesserily the whole dollars]: ";
    cin >> pay_rate5;
    cin.ignore(); // Igonre characters after the number is entered
    cout << endl;
    cout << endl;
    cout << endl;
    
    // Variables for total pay for each employee
    double total_pay1 = hours_work1 * pay_rate1,
           total_pay2 = hours_work2 * pay_rate2,
           total_pay3 = hours_work3 * pay_rate3,
           total_pay4 = hours_work4 * pay_rate4,
           total_pay5 = hours_work5 * pay_rate5;

    // Hold the average pay
    double average_pay = (total_pay1 + total_pay2 + total_pay3 + total_pay4 + total_pay5 ) / 5;
    
    cout << setprecision (2) << fixed; // control number of decimal places
    cout << setw(LENGTH5) << "Employee#" << setw(LENGTH5) << "Hours" << setw(LENGTH5) << "Pay Rate" << setw(LENGTH5) << "Total Pay" << endl;
    cout << setw(85)<<"===========================================================================" <<endl;
    cout << setw(LENGTH1)<<"1"<<setw(LENGTH2)<< hours_work1 <<setw(LENGTH3)<<"$"<< pay_rate1 <<setw(LENGTH4)<<"$"<< total_pay1 << endl;
    cout << setw(LENGTH1)<<"2"<<setw(LENGTH2)<< hours_work2 <<setw(LENGTH3)<<"$"<< pay_rate2 <<setw(LENGTH4)<<"$"<< total_pay2 << endl;
    cout << setw(LENGTH1)<<"3"<<setw(LENGTH2)<< hours_work3 <<setw(LENGTH3)<<"$"<< pay_rate3 <<setw(LENGTH4)<<"$"<< total_pay3 << endl;
    cout << setw(LENGTH1)<<"4"<<setw(LENGTH2)<< hours_work4 <<setw(LENGTH3)<<"$"<< pay_rate4 <<setw(LENGTH4)<<"$"<< total_pay4 << endl;
    cout << setw(LENGTH1)<<"5"<<setw(LENGTH2)<< hours_work5 <<setw(LENGTH3)<<"$"<< pay_rate5 <<setw(LENGTH4)<<"$"<< total_pay5 << endl;
    cout << setw(85)<<"==========================================================================="<<endl;
    cout << setw(16) << "Total" << setw (57) << "$" << average_pay << endl;
    cout << endl;
    cout << endl;
    
    
    
    
    
    cout << " Press hit ENTER to Finish...";
    cin.get();
    cout << endl;
    return 0;
}
