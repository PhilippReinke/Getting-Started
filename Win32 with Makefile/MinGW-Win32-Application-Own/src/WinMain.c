#include <windows.h>
#include "Resource.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
	MessageBox(NULL, L"Hello", L"Nice Title", MB_OK);
	return 0;
}