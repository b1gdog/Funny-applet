#include <Windows.h>

void main()
{
	BlockInput(TRUE);	//TRUEΪ��ס����
	MessageBeep(16);	//��ס������
	
	Sleep(5000);		//��ס5s

	BlockInput(FALSE);	//FalseΪ����ס����
	MessageBeep(48);	//����������
}