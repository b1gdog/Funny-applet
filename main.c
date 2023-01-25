#include <Windows.h>

void main()
{
	BlockInput(TRUE);	//TRUE为锁住键盘
	MessageBeep(16);	//锁住的声音
	
	Sleep(5000);		//锁住5s

	BlockInput(FALSE);	//False为不锁住键盘
	MessageBeep(48);	//解锁的声音
}