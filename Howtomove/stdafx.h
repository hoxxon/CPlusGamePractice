#pragma once

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <time.h>
#include <tchar.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;


//�����ڵ� ����
#ifdef _UNICODE
#define _tstring wstring
#define _tcout wcout
#else //��Ƽ����Ʈ ����
#define _tstring string
#define _tcout cout
#endif // _UNICODE
