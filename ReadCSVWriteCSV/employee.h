#pragma once
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class employee
{
public:
	employee(string, string);

	void ReadFromFile();
	void AddToRow(string);
	void AddToLine();
	void WriteToFile();
	void CloseFiles();
private:
	ifstream empin;
	ofstream empout;

	vector<string> temp;
	vector<vector<string>> emp;
};

