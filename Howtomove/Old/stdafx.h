#pragma once
#include <iostream>
#include <Windows.h>
//time()을 사용하기 위한 헤더파일
#include <time.h>
//문자열 헤더파일
#include <string>
//사용자 정의 함수 모음
//#include "function.h"

using namespace std;


struct UserData
{
	string ID;
	string PW;
	string gender;
};


/*
#ifdef _UNICODE
#else
#endif // _UNICODE
*/
