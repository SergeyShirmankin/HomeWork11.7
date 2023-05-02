#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void copyFiles(const string& inFilename1, const string& inFilename2, const string& outFilename) {
	{
		ifstream in1;
		ifstream in2;
		ofstream out;
		int  str1, str2;

		in1.open(inFilename1, fstream::in);
		in2.open(inFilename2, fstream::in);
		out.open(outFilename, fstream::out);

		if (in1.is_open()&& in2.is_open()&& out.is_open()) // проверяем, что файл успешно открыт
		{
			
			while (!in1.eof())
		{
				in1 >> str1;
				out << str1<<" ";
		}
			while (!in2.eof())
			{
				in2 >> str2;
				out << str2<<" ";
			}
			in1.close(); // закрываем файл
			in2.close(); // закрываем файл
			out.close(); // закрываем файл
		}
	}
}