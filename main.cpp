#include <string>
#include <fstream>  // ������ � �������
#include <iostream>
#include <cstdlib> // ��� ��������� ��������� �����
#include <ctime>
#include <chrono> // ��� ��������� �������
#include "Functions.h"
using namespace std;

int main()
{
	string filename = "filename.txt";
	string filenameNow = "sort";
	const int size = 2000;
	const int cycle = 10000;
	int* rand_arr = new int[size];
	srand(time(nullptr)); // ���������� ������� �����, ����� ������������� ��������� ��������
	int lef_border = 1;
	int range_len = 100; // ������ ������� = range_len + left_border
	for (int i = 0; i < size; i++)
		rand_arr[i] = lef_border + rand() % range_len; // ���������� ����� � ��������� ��������� � ���������� � ������
	auto start = chrono::high_resolution_clock::now();
	write_arr(filename, rand_arr, size, 1); // ���������� ������ � ���� � ������� ����
//-------------------------------------------------------------------------------
	//for (int j = 0; j < cycle; j++) {
	//	for (long i = 0; i < size; i++)
	//		rand_arr[i] = lef_border + rand() % range_len; // ���������� ����� � ��������� ��������� � ���������� � ������
	//	write_arr(filename, rand_arr, size, 0); // ���������� ������ � ���� � ��������� � ����
	//}
//===============================================================================
	int* array_from_file = nullptr;
	int n = 100;
	int stepCycle = 0;
	int pointer = 0;
	//----------------------------------------------------------------
	while (read_arr(filename, array_from_file, n, pointer)) // ������ ������ �� �����
	{
		stepCycle++;
		std::cout << "stepCycle = " << stepCycle << " pointer = " << pointer << endl;
	}
	//----------------------------------------------------------------
	write_sortFile(filenameNow, rand_arr, size, 1);
	write_sortFile(filenameNow, rand_arr, size, 0);
	//----------------------------------------------------------------
	auto finish = chrono::high_resolution_clock::now(); // ��������� ����� ����� ������ ���������
	chrono::duration<double> elapsed = finish - start;
	cout << "Elapsed time: " << elapsed.count() << " sec" << endl;
	//----------------------------------------------------------------
	delete[] rand_arr;
	delete[] array_from_file;
	return 0;
}