#include <iostream>
#include <iomanip>

using namespace std;


int main()
{

	int hours_worked1, hours_worked2, hours_worked3, hours_worked4, hours_worked5;
	double pay_rate1, pay_rate2, pay_rate3, pay_rate4, pay_rate5;


	cout << "        " << "Description" << endl;
	cout << "        " << "Project:Output Format Payroll" << endl;
	cout << "        " << "Course:CIT 120 T1" << endl;
	cout << "        " << "Programmer: Hanjae Kim" << endl;
	cout << "        " << "Last Modified:02/03/20" << endl << endl;



	cout << "Hours worked Employee " << "#1";
	cout << "[only whole hours will be credited] :";
	cin >> hours_worked1;
	cin.ignore();
	cout << "Hourly pate rate for Employee" << "#1";
	cout << "[not necessarilly whole dollars] :";
	cin >> pay_rate1;
	cin.ignore();
	cout << endl;


	cout << "Hours worked Employee " << "#2";
	cout << "[only whole hours will be credited] :";
	cin >> hours_worked2;
	cin.ignore();
	cout << "Hourly pate rate for Employee" << "#2";
	cout << "[not necessarilly whole dollars] :";
	cin >> pay_rate2;
	cin.ignore();
	cout << endl;


	cout << "Hours worked Employee " << "#3";
	cout << "[only whole hours will be credited] :";
	cin >> hours_worked3;
	cin.ignore();
	cout << "Hourly pate rate for Employee" << "#3";
	cout << "[not necessarilly whole dollars] :";
	cin >> pay_rate3;
	cin.ignore();
	cout << endl;


	cout << "Hours worked Employee " << "#4";
	cout << "[only whole hours will be credited] :";
	cin >> hours_worked4;
	cin.ignore();
	cout << "Hourly pate rate for Employee" << "#4";
	cout << "[not necessarilly whole dollars] :";
	cin >> pay_rate4;
	cin.ignore();
	cout << endl;

	cout << "Hours worked Employee " << "#5";
	cout << "[only whole hours will be credited] :";
	cin >> hours_worked5;
	cin.ignore();
	cout << "Hourly pate rate for Employee" << "#5";
	cout << "[not necessarilly whole dollars] :";
	cin >> pay_rate5;
	cin.ignore();
	cout << endl << endl;

	cout << setprecision(2) << fixed;
	cout << "        Employee#" << "        Hours" << "   Pay Rate" << "        Total Pay" << endl;
	cout << "        ===================================================" << endl;
	cout << setw(10) << "1" << setw(18) << hours_worked1 << setw(7) << "$" << pay_rate1 << setw(12) << "$" << hours_worked1 * pay_rate1 << endl;
	cout << setw(10) << "2" << setw(18) << hours_worked2 << setw(7) << "$" << pay_rate2 << setw(12) << "$" << hours_worked2 * pay_rate2 << endl;
	cout << setw(10) << "3" << setw(18) << hours_worked3 << setw(7) << "$" << pay_rate3 << setw(12) << "$" << hours_worked3 * pay_rate3 << endl;
	cout << setw(10) << "4" << setw(18) << hours_worked4 << setw(7) << "$" << pay_rate4 << setw(12) << "$" << hours_worked4 * pay_rate4 << endl;
	cout << setw(10) << "5" << setw(18) << hours_worked5 << setw(7) << "$" << pay_rate5 << setw(12) << "$" << hours_worked5 * pay_rate5 << endl;
	cout << "        ===================================================" << endl;
	cout << "        Total" << setw(39) << "$";
	cout << ((hours_worked1 * pay_rate1) + (hours_worked2 * pay_rate2) + (hours_worked3 * pay_rate3) + (hours_worked4 * pay_rate4) + (hours_worked5 * pay_rate5)) / 5;
	cout << endl << endl;




	return 0;
}