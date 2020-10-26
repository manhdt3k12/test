/* C++ program to enter basic salary and calculate gross salary of an employee
Write a C++ program to input basic salary of an employee and calculate gross 
salary according to given conditions.
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
Basic Salary >= 20001 : HRA = 30%, DA = 95%

How to calculate gross salary of an employee using if else in C++ programming. 
Program to calculate gross salary of an employee using if else in C++ program. 
Logic to find gross salary of employee in C++ program.

Example
Input
Input basic salary of an employee: 22000

Output
Gross salary = 44000

Logic to find gross salary of an employee
Gross salary is the final salary computed after the additions of DA, HRA and other allowances. 
The formula for DA and HRA is: da = basic_salary * (DA/100)
If DA = 80% then the statement becomes: da = basic_salary * (80/100). 
Which can also be written as: DA = basic_salary * 0.08. 
Likewise you can also derive a formula for HRA.
Step by step descriptive logic to find gross salary of an employee.
Input basic salary of employee. Store it in some variable say basic_salary.
If basic_salary <= 10000 then, hra = basic_salary * 0.8 and da = basic_salary * 0.2.
Similarly check basic salary and compute hra and da accordingly.
Calculate final gross salary using formula: gross_salary = basic_salary + da + hra.

Program to calculate gross salary of employee
/**
 * C++ program to calculate gross salary of an employee
 */
#include <iostream>
using namespace std;
int main() {
  float basic, gross, da, hra;

  /* Input basic salary of employee */
  cout<<"Enter basic salary of an employee: ";
  cin>>basic;

  /* Calculate D.A and H.R.A according to specified conditions */
  if(basic <= 10000){
  	  da  = basic * 0.8;
      hra = basic * 0.2;
  }       
  else if(basic <= 20000){
  	  da  = basic * 0.9;
      hra = basic * 0.25;
  }     
  else{
  	  da  = basic * 0.95;
  	  hra = basic * 0.3;
      /* Calculate gross salary */
      gross = basic + hra + da;
      cout<<"GROSS SALARY OF EMPLOYEE = "<<gross;
  }               
  return 0;
}