// Week 3 - Task One: Payroll System Using Functions

#include <iostream>
#include <string>
using namespace std;

const double RATE_PER_HOUR = 500; // overtime rate per hour

// Asks the user for the employee details
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

// Overtime Pay = Overtime Hours x Rate Per Hour
double calculateOvertimePay(double overtimeHours) {
    return overtimeHours * RATE_PER_HOUR;
}

// Net Salary = Basic Salary + Overtime Pay
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// Prints the payslip
void displayPayslip(string name, double basicSalary, double overtimeHours,
                    double overtimePay, double netSalary) {
    cout << "\n------ PAYSLIP ------" << endl;
    cout << "Name           : " << name << endl;
    cout << "Basic Salary   : " << basicSalary << endl;
    cout << "Overtime Hours : " << overtimeHours << endl;
    cout << "Overtime Pay   : " << overtimePay << endl;
    cout << "Net Salary     : " << netSalary << endl;
    cout << "---------------------" << endl;
}

int main() {
    string name;
    double basicSalary, overtimeHours;
