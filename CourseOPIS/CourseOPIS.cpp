// CourseOPIS.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"
#include "Form2.h"
using namespace CourseOPIS;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	if(isOpenForm2)
		Application::Run(gcnew Form2());
	return 0;
}
