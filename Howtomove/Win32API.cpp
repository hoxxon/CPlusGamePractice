#include "stdafx.h"
#include <tchar.h>

HINSTANCE	g_hInstance;

HWND			g_hwnd;

LPCTSTR		g_AppName = _T("LongTimeNoSee");

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY _tWinMain(HINSTANCE hInstance,
	HINSTANCE	hPrevInstance,
	LPTSTR			IpCmdLine,
	int					nCmdShow)
{

	WNDCLASS wc;

	ZeroMemory(&wc, sizeof(WNDCLASS));

	UNREFERENCED_PARAMETER(IpCmdLine);

	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = static_cast<WNDPROC>(WndProc);
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = static_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));
	wc.lpszClassName = g_AppName;
	wc.lpszMenuName = nullptr;

	if (!RegisterClass(&wc))
		return FALSE;

	g_hInstance = hInstance;

	g_hwnd = CreateWindow(
		g_AppName,
		g_AppName,
		WS_OVERLAPPEDWINDOW,
		50,
		50,
		800,
		600,
		nullptr,
		nullptr,
		hInstance,
		nullptr
	);

	if (!g_hwnd)
		return FALSE;

	ShowWindow(g_hwnd, nCmdShow);

	UpdateWindow(g_hwnd);

	MSG message;
	ZeroMemory(&message, sizeof(MSG));

	while (true)
	{
		if (PeekMessage(&message, nullptr, 0, 0, PM_REMOVE))
		{
			if (message.message == WM_QUIT)
				break;

			TranslateMessage(&message);
			DispatchMessage(&message);
		}

	}

	DestroyWindow(g_hwnd);
	UnregisterClass(g_AppName, hInstance);

	return message.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM IParam) 
{
	switch (message)
	{
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hWnd, &ps);

		EndPaint(hWnd, &ps);
	}
	break;

	case WM_DESTROY: case WM_CLOSE:
		PostQuitMessage(0);
		break;
	case WM_LBUTTONDOWN:
		MessageBox
		(
			g_hwnd,
			_T("왼쪽 버튼 클릭"),
			_T("이벤트 발생"),
			MB_OK
		);
		break;
	case WM_LBUTTONUP:
		break;
	case WM_KEYDOWN:
		if(wParam == VK_ESCAPE)
		{
			PostQuitMessage(0);
		}
		if (wParam == VK_LEFT)
		{
			MessageBox
			(
				g_hwnd,
				_T("내가 메세지 박스다"),
				_T("난 이름"),
				MB_OK
			);
		}
		break;
	}

	return (DefWindowProc(hWnd, message, wParam, IParam));
}