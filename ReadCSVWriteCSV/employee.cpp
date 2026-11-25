#include "employee.h"
#include <fstream>
#include <vector>
#include <sstream>
employee::employee(string infile, string outfile)
{
	empin.open(infile);
	empout.open(outfile);
}
void employee::AddToRow(string value)
{
	temp.push_back(value);
}
void employee::AddToLine()
{
	emp.push_back(temp);
	temp.clear();
}
void employee::ReadFromFile()
{
	string line;
	string field;
	while (getline(empin, line))
	{
		stringstream ss(line);

		while (getline(ss, field, ','))
		{
			AddToRow(field);
		}

		AddToLine();
	}

}
void employee::WriteToFile()
{
	for (int i = 0; i < emp.size(); i++)
	{
		empout << emp[i][1] << " " << emp[i][0] << ",";
		empout << emp[i][2] << ",";
		empout << emp[i][3] << ",";
		empout << emp[i][4] << endl;
	}
}
void employee::CloseFiles()
{
	empin.close();
	empout.close();
}
