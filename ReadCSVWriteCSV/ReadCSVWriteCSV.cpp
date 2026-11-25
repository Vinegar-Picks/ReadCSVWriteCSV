#include <iostream>
#include "employee.h"

int main()
{
    employee emp("employee.csv", "newemployee.csv");

    emp.ReadFromFile();
    emp.WriteToFile();
    emp.CloseFiles();
}