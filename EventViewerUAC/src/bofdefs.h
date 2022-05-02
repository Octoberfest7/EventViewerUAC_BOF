#pragma once
#pragma intrinsic(memcpy,strlen)
#include <windows.h>
#include <stdio.h>

WINBASEAPI void* __cdecl MSVCRT$memcpy(void* __restrict _Dst, const void* __restrict _Src, size_t _MaxCount);
WINBASEAPI size_t __cdecl MSVCRT$strlen(const char *_Str);
WINBASEAPI void* WINAPI MSVCRT$malloc(SIZE_T);
WINBASEAPI void __cdecl MSVCRT$free(void *_Memory);
DECLSPEC_IMPORT char * __cdecl MSVCRT$strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);

WINBASEAPI DWORD WINAPI KERNEL32$GetEnvironmentVariableA(LPCSTR lpName, LPSTR lpBuffer, DWORD nSize);
WINBASEAPI DWORD WINAPI KERNEL32$GetFileAttributesA (LPCSTR lpFileName);
WINBASEAPI BOOL WINAPI KERNEL32$CreateDirectoryA(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
WINBASEAPI HANDLE WINAPI KERNEL32$CreateFileA (LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
WINBASEAPI BOOL WINAPI KERNEL32$WriteFile(HANDLE hFile, LPCVOID lpBuffer, WORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
WINBASEAPI WINBOOL WINAPI KERNEL32$CloseHandle (HANDLE hObject);
WINBASEAPI HINSTANCE WINAPI SHELL32$ShellExecuteA(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd);
WINBASEAPI BOOL WINAPI KERNEL32$DeleteFileA(LPCSTR lpFileName);
WINBASEAPI VOID WINAPI KERNEL32$Sleep (DWORD dwMilliseconds);

#define GetFileAttributesA KERNEL32$GetFileAttributesA
#define GetEnvironmentVariableA KERNEL32$GetEnvironmentVariableA 
#define CreateDirectoryA KERNEL32$CreateDirectoryA 
#define CreateFileA KERNEL32$CreateFileA 
#define CloseHandle KERNEL32$CloseHandle 
#define WriteFile  KERNEL32$WriteFile  
#define ShellExecuteA SHELL32$ShellExecuteA 
#define DeleteFileA KERNEL32$DeleteFileA 
#define Sleep KERNEL32$Sleep

#define memcpy MSVCRT$memcpy 
#define strlen MSVCRT$strlen 
#define malloc MSVCRT$malloc 
#define free MSVCRT$free 
#define strcat MSVCRT$strcat 