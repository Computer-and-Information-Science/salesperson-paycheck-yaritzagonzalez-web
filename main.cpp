#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip> 
int main() {

  ifstream employeeData;
  ofstream payrollData;

  employeeData.open("sampleinput.txt");
  payrollData.open("output.dat");

  cout << setprecision(2) << fixed;

  string firstName, lastName;
  double baseSalary, commPercent;
  double totalSales;
  double employeeExpense;
  double commission, total;

  

  employeeData >> firstName >> lastName >> baseSalary >> commPercent >> totalSales >> employeeExpense;
  cout << "Payroll data for " << firstName << " " << lastName << endl;
  cout << "Base Salary:    " << setw(7) << baseSalary << endl;

  commission = totalSales * (commPercent/100);

  cout << "Commission:     " << setw(7) << commission << " (" << commPercent << "\% of " << totalSales << ")" << endl;
  cout << "Expenses:       " << setw(7) << employeeExpense << endl;
  cout << "               --------" << endl;

  total = baseSalary + commission + employeeExpense;

  cout << "Total:          " << setw (7) << total << endl;
  payrollData << firstName << lastName << baseSalary << commPercent << totalSales << employeeExpense << endl;


  employeeData.close();
  payrollData.close();

}
