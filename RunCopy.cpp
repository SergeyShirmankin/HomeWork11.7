#include "RunCopy.h"
#include "Functions.h"
#include "CopyFilesr.h"
#include "NumericSoft.h"

string fileNumer = "number";

void RunCopy()
{
//=======================00==========================================
	write_sortNumeric("sort0.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort0.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber0.txt");
//=========================01========================================
	write_sortNumeric("sort1.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort1.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber1.txt");
//=========================02========================================
	write_sortNumeric("sort2.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort2.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber2.txt");
//==========================03=======================================
	write_sortNumeric("sort3.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort3.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber3.txt");
//==========================04=======================================
	write_sortNumeric("sort4.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort4.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber4.txt");
//==========================05=======================================
	write_sortNumeric("sort5.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort5.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber5.txt");
//==========================06=======================================
	write_sortNumeric("sort6.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort6.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber6.txt");
//==========================07=======================================
	write_sortNumeric("sort7.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort7.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber7.txt");
//==========================08=======================================
	write_sortNumeric("sort7.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort7.txt", fileNumer, 0);//��������� �� ������
  //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber8.txt");
//==========================09=======================================
	write_sortNumeric("sort9.txt", fileNumer, 1);//������� �����
	write_sortNumeric("sort9.txt", fileNumer, 0);//��������� �� ������
   //-----------------------------------------------------------------
	copy_10_Files("number1.txt", "number2.txt",// ������� �����
		"number3.txt", "number4.txt", "number5.txt",
		"number6.txt", "number7.txt", "number8.txt",
		"number9.txt", "outNumber9.txt");
}
