#pragma once
#include <iostream>
#include <windows.h>
#include <Tlhelp32.h>
#include <process.h>
#pragma   warning(disable:4996) 
BOOL CheckDebug1();
BOOL CheckDebug2();
BOOL CheckDebug3();
BOOL CheckDebug4();
BOOL CheckDebug5();
BOOL CheckDebug6();
BOOL CheckDebug7();
BOOL CheckDebug8();
BOOL CheckDebug9();
BOOL CheckDebug10();
BOOL CheckDebug11();
BOOL CheckDebug12();
BOOL CheckDebug13();
BOOL CheckDebug14();
BOOL CheckDebug15();
BOOL CheckDebug16();
BOOL CheckDebug17();
BOOL CheckDebug18();
BOOL CheckDebug19();
BOOL CheckDebug20();
BOOL CheckDebug21();
BOOL CheckDebug22();
BOOL CheckDebug23();
BOOL CheckDebug24();
BOOL CheckDebug25();
BOOL CheckDebug26();
BOOL CheckDebug27();
BOOL CheckDebug28();
BOOL CheckDebug29();
BOOL CheckDebug30();

extern BOOL CALLBACK TestExceptionCode(DWORD dwCode);
extern BOOL CALLBACK EnumWndProc(HWND hwnd, LPARAM lParam);
typedef DWORD(WINAPI* NtQueryInformationProcessPtr)(
	HANDLE processHandle,
	DWORD processInformationClass,
	PVOID processInformation,
	ULONG processInformationLength,
	PULONG returnLength);

typedef enum enumSYSTEM_INFORMATION_CLASS
{
	SystemBasicInformation,
	SystemProcessorInformation,
	SystemPerformanceInformation,
	SystemTimeOfDayInformation,
}SYSTEM_INFORMATION_CLASS;

typedef struct tagPROCESS_BASIC_INFORMATION
{
	DWORD ExitStatus;
	DWORD PebBaseAddress;
	DWORD AffinityMask;
	DWORD BasePriority;
	ULONG UniqueProcessId;
	ULONG InheritedFromUniqueProcessId;
}PROCESS_BASIC_INFORMATION;

typedef LONG(WINAPI* PNTQUERYINFORMATIONPROCESS)(HANDLE, UINT, PVOID, ULONG, PULONG);

BOOL(*fun_array[]) () = { CheckDebug1,CheckDebug2,CheckDebug3,CheckDebug4,CheckDebug5,CheckDebug6,CheckDebug7,CheckDebug8,CheckDebug9,CheckDebug10,CheckDebug11,CheckDebug12,CheckDebug13,CheckDebug14,
CheckDebug15,CheckDebug16,CheckDebug17,CheckDebug18,CheckDebug19,CheckDebug20,CheckDebug21,CheckDebug22,CheckDebug23,CheckDebug24,CheckDebug25,CheckDebug26,CheckDebug27,CheckDebug28,CheckDebug29,CheckDebug30 };