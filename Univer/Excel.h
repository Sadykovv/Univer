#pragma once
#include <fstream>

class Excel
{
public:
	Excel();
	void fillTable(int id, System::String^ fio);
	void close_File();
private:
	std::ofstream myfile;
};

