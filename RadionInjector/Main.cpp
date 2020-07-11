#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>

// Change "MY_DLL_NAME.dll" to your dll name
#define DLL_NAME "radion.dll"

// And you need:
// 1. change all bytes(0x00, 0x01, 0x03....) in define "JUNKS" to random bytes
// 2. change size this block by add new bytes
#define JUNKS \
__asm _emit 0xba \
__asm _emit 0x43 \
__asm _emit 0xc7 \
__asm _emit 0x89 \
__asm _emit 0xfc \
__asm _emit 0x24 \
__asm _emit 0xd2 \
__asm _emit 0x2d \
__asm _emit 0x48 \
__asm _emit 0xe6 \
__asm _emit 0x18 \
__asm _emit 0x70 \
__asm _emit 0xc8 \
__asm _emit 0x69 \
__asm _emit 0x51 \
__asm _emit 0x03 \
__asm _emit 0x29 \
__asm _emit 0x22 \
__asm _emit 0xab \
__asm _emit 0x49 \
__asm _emit 0x1f \
__asm _emit 0x2a \
__asm _emit 0xdb \
__asm _emit 0xd1 \
__asm _emit 0xe0 \
__asm _emit 0x6a \
__asm _emit 0xac \
__asm _emit 0x44 \
__asm _emit 0x0d \
__asm _emit 0xfb \
__asm _emit 0xb1 \
__asm _emit 0x6c \
__asm _emit 0x30 \
__asm _emit 0x67 \
__asm _emit 0xe1 \
__asm _emit 0x19 \
__asm _emit 0x6c \
__asm _emit 0x88 \
__asm _emit 0x4a \
__asm _emit 0x24 \
__asm _emit 0x42 \
__asm _emit 0x09 \
__asm _emit 0x69 \
__asm _emit 0x21 \
__asm _emit 0xd2 \
__asm _emit 0xac \
__asm _emit 0x42 \
__asm _emit 0x11 \
__asm _emit 0x8f \
__asm _emit 0x2f \
__asm _emit 0xe2 \
__asm _emit 0xb5 \
__asm _emit 0x7f \
__asm _emit 0x64 \
__asm _emit 0x70 \
__asm _emit 0xb2 \
__asm _emit 0x29 \
__asm _emit 0xa7 \
__asm _emit 0x7e \
__asm _emit 0x2d \
__asm _emit 0xf1 \
__asm _emit 0x0a \
__asm _emit 0x5a \
__asm _emit 0x03 \
__asm _emit 0xdf \
__asm _emit 0x55 \
__asm _emit 0xe6 \
__asm _emit 0xfb \
__asm _emit 0xd8 \
__asm _emit 0xd1 \
__asm _emit 0x70 \
__asm _emit 0x9f \
__asm _emit 0xee \
__asm _emit 0xf0 \
__asm _emit 0xe7 \
__asm _emit 0xbe \
__asm _emit 0x8f \
__asm _emit 0xa0 \
__asm _emit 0x7f \
__asm _emit 0x57 \
__asm _emit 0x8b \
__asm _emit 0x24 \
__asm _emit 0x14 \
__asm _emit 0x4d \
__asm _emit 0xc9 \
__asm _emit 0xd4 \
__asm _emit 0x61 \
__asm _emit 0x18 \
__asm _emit 0x77 \
__asm _emit 0xa5 \
__asm _emit 0x8d \
__asm _emit 0x2a \
__asm _emit 0x69 \
__asm _emit 0x25 \
__asm _emit 0x1d \
__asm _emit 0x38 \
__asm _emit 0x58 \
__asm _emit 0xc9 \
__asm _emit 0xab \
__asm _emit 0xf7 \
__asm _emit 0xf2 \
__asm _emit 0xcc \
__asm _emit 0x3a \
__asm _emit 0xaa \
__asm _emit 0xbf \
__asm _emit 0xa1 \
__asm _emit 0x93 \
__asm _emit 0x34 \
__asm _emit 0x64 \
__asm _emit 0xa8 \
__asm _emit 0xff \
__asm _emit 0xbc \
__asm _emit 0x1a \
__asm _emit 0xc8 \
__asm _emit 0xdf \
__asm _emit 0x4d \
__asm _emit 0x12 \
__asm _emit 0x74 \
__asm _emit 0xb3 \
__asm _emit 0x14 \
__asm _emit 0xee \
__asm _emit 0x5f \
__asm _emit 0xce \
__asm _emit 0xb8 \
__asm _emit 0x70 \
__asm _emit 0xe1 \
__asm _emit 0x20 \
__asm _emit 0x4c \
__asm _emit 0x53 \
__asm _emit 0xe8 \
__asm _emit 0xd7 \
__asm _emit 0x62 \
__asm _emit 0x95 \
__asm _emit 0x32 \
__asm _emit 0xa1 \
__asm _emit 0xdb \
__asm _emit 0x4f \
__asm _emit 0xf8 \
__asm _emit 0x86 \
__asm _emit 0x0f \
__asm _emit 0x10 \
__asm _emit 0x4a \
__asm _emit 0xf1 \
__asm _emit 0xa3 \
__asm _emit 0x85 \
__asm _emit 0x39 \
__asm _emit 0xb7 \
__asm _emit 0x0a \
__asm _emit 0xc2 \
__asm _emit 0x68 \
__asm _emit 0x31 \
__asm _emit 0x60 \
__asm _emit 0xd5 \
__asm _emit 0x44 \
__asm _emit 0x71 \
__asm _emit 0x39 \
__asm _emit 0xbf \
__asm _emit 0x34 \
__asm _emit 0x54 \
__asm _emit 0x8f \
__asm _emit 0x98 \
__asm _emit 0x8d \
__asm _emit 0xda \
__asm _emit 0xb9 \
__asm _emit 0xfa \
__asm _emit 0x23 \
__asm _emit 0x1e \
__asm _emit 0x0f \
__asm _emit 0xa5 \
__asm _emit 0x07 \
__asm _emit 0x64 \
__asm _emit 0x25 \
__asm _emit 0x57 \
__asm _emit 0x32 \
__asm _emit 0x21 \
__asm _emit 0x8f \
__asm _emit 0x62 \
__asm _emit 0x61 \
__asm _emit 0x7c \
__asm _emit 0x49 \
__asm _emit 0x6a \
__asm _emit 0x72 \
__asm _emit 0xd7 \
__asm _emit 0xe9 \
__asm _emit 0xbb \
__asm _emit 0x7e \
__asm _emit 0x6e \
__asm _emit 0x44 \
__asm _emit 0x12 \
__asm _emit 0x2c \
__asm _emit 0x7a \
__asm _emit 0x50 \
__asm _emit 0xe3 \
__asm _emit 0x42 \
__asm _emit 0x1a \
__asm _emit 0x18 \
__asm _emit 0x75 \
__asm _emit 0x81 \
__asm _emit 0x42 \
__asm _emit 0xc6 \
__asm _emit 0xc7 \
__asm _emit 0xa5 \
__asm _emit 0x19 \
__asm _emit 0xcb \
__asm _emit 0x96 \
__asm _emit 0x81 \
__asm _emit 0xe8 \
__asm _emit 0x4c \
__asm _emit 0xa7 \
__asm _emit 0x0a \
__asm _emit 0x67 \
__asm _emit 0xc9 \
__asm _emit 0xa0 \
__asm _emit 0x86 \
__asm _emit 0xd3 \
__asm _emit 0x4e \
__asm _emit 0x6d \
__asm _emit 0x5c \
__asm _emit 0x96 \
__asm _emit 0xc7 \
__asm _emit 0x39 \
__asm _emit 0x60 \
__asm _emit 0xa3 \
__asm _emit 0x8a \
__asm _emit 0x91 \
__asm _emit 0x92 \
__asm _emit 0x35 \
__asm _emit 0xec \
__asm _emit 0xe0 \
__asm _emit 0xbc \
__asm _emit 0xbb \
__asm _emit 0x2b \
__asm _emit 0xba \
__asm _emit 0xcc \
__asm _emit 0x9d \
__asm _emit 0xea \
__asm _emit 0xb3 \
__asm _emit 0xf1 \
__asm _emit 0x59 \
__asm _emit 0x69 \
__asm _emit 0x21 \
__asm _emit 0x0f \
__asm _emit 0x71 \
__asm _emit 0x0a \
__asm _emit 0x80 \
__asm _emit 0xcf \
__asm _emit 0x84 \
__asm _emit 0x44 \
__asm _emit 0x34 \
__asm _emit 0xa9 \
__asm _emit 0xed \
__asm _emit 0xd1 \
__asm _emit 0xec \
__asm _emit 0x99 \
__asm _emit 0x41 \
__asm _emit 0xb2 \
__asm _emit 0xf8 \
__asm _emit 0x19 \
__asm _emit 0x8e \
__asm _emit 0x3a \
__asm _emit 0x80 \
__asm _emit 0xfd \
__asm _emit 0xf5 \
__asm _emit 0xa4 \
__asm _emit 0x8c \
__asm _emit 0x36 \
__asm _emit 0xe9 \
__asm _emit 0xd4 \
__asm _emit 0xc9 \
__asm _emit 0x5d \
__asm _emit 0xf3 \
__asm _emit 0xbb \
__asm _emit 0xe3 \
__asm _emit 0x8f \
__asm _emit 0x03 \
__asm _emit 0x56 \
__asm _emit 0x0f \
__asm _emit 0x9e \
__asm _emit 0x3b \
__asm _emit 0x07 \
__asm _emit 0x13 \
__asm _emit 0x24 \
__asm _emit 0xc9 \
__asm _emit 0x6c \
__asm _emit 0x27 \
__asm _emit 0xc3 \
__asm _emit 0x6c \
__asm _emit 0xf4 \
__asm _emit 0xb4 \
__asm _emit 0x08 \
__asm _emit 0x9e \
__asm _emit 0xd5 \
__asm _emit 0x81 \
__asm _emit 0x84 \
__asm _emit 0x50 \
__asm _emit 0xe5 \
__asm _emit 0xa9 \
__asm _emit 0x43 \
__asm _emit 0x0b \
__asm _emit 0x38 \
__asm _emit 0x0d \
__asm _emit 0xcd \
__asm _emit 0x26 \
__asm _emit 0x34 \
__asm _emit 0xab \
__asm _emit 0x77 \
__asm _emit 0x11 \
__asm _emit 0xb9 \
__asm _emit 0x63 \
__asm _emit 0x70 \
__asm _emit 0x26 \
__asm _emit 0x8b \
__asm _emit 0x0d \
__asm _emit 0xaa \
__asm _emit 0x33 \
__asm _emit 0x68 \
__asm _emit 0xa1 \
__asm _emit 0xb1 \
__asm _emit 0x99 \
__asm _emit 0x14 \
__asm _emit 0x1d \
__asm _emit 0xa8 \
__asm _emit 0xd3 \
__asm _emit 0x53 \
__asm _emit 0x59 \
__asm _emit 0x6a \
__asm _emit 0x40 \
__asm _emit 0x47 \
__asm _emit 0x60 \
__asm _emit 0x24 \
__asm _emit 0x61 \
__asm _emit 0xf8 \
__asm _emit 0x04 \
__asm _emit 0x5a \
__asm _emit 0x57 \
__asm _emit 0x06 \
__asm _emit 0x7d \
__asm _emit 0xdc \
__asm _emit 0x06 \
__asm _emit 0xf9 \
__asm _emit 0x9e \
__asm _emit 0x96 \
__asm _emit 0x21 \
__asm _emit 0xd6 \
__asm _emit 0x6d \
__asm _emit 0xde \
__asm _emit 0x4c \
__asm _emit 0x82 \
__asm _emit 0x8e \
__asm _emit 0xd6 \
__asm _emit 0xe7 \
__asm _emit 0xc1 \
__asm _emit 0x81 \
__asm _emit 0x64 \
__asm _emit 0x6e \
__asm _emit 0xdb \
__asm _emit 0xf1 \
__asm _emit 0x82 \
__asm _emit 0x83 \
__asm _emit 0xb3 \
__asm _emit 0x37 \
__asm _emit 0x2d \
__asm _emit 0x82 \
__asm _emit 0xf8 \
__asm _emit 0x8c \
__asm _emit 0xa8 \
__asm _emit 0x3b \
__asm _emit 0x85 \
__asm _emit 0xe0 \
__asm _emit 0xc9 \
__asm _emit 0xa2 \
__asm _emit 0x85 \
__asm _emit 0x0e \
__asm _emit 0xb1 \
__asm _emit 0x29 \
__asm _emit 0x71 \
__asm _emit 0x22 \
__asm _emit 0xcd \
__asm _emit 0xa8 \
__asm _emit 0x8d \
__asm _emit 0x4d \
__asm _emit 0x33 \
__asm _emit 0xd7 \
__asm _emit 0xff \
__asm _emit 0x85 \
__asm _emit 0xe3 \
__asm _emit 0xef \
__asm _emit 0x8e \
__asm _emit 0x84 \
__asm _emit 0x74 \
__asm _emit 0x31 \
__asm _emit 0x4a \
__asm _emit 0x9e \
__asm _emit 0x3a \
__asm _emit 0x01 \
__asm _emit 0xed \
__asm _emit 0xe8 \
__asm _emit 0xdd \
__asm _emit 0xfb \
__asm _emit 0x7e \
__asm _emit 0xf0 \
__asm _emit 0xcf \
__asm _emit 0x08 \
__asm _emit 0x24 \
__asm _emit 0x5e \
__asm _emit 0x54 \
__asm _emit 0x57 \
__asm _emit 0xaf \
__asm _emit 0xb9 \
__asm _emit 0x3e \
__asm _emit 0x31 \
__asm _emit 0x55 \
__asm _emit 0xda \
__asm _emit 0xf2 \
__asm _emit 0xea \
__asm _emit 0x5a \
__asm _emit 0xf5 \
__asm _emit 0xa6 \
__asm _emit 0x4e \
__asm _emit 0xdf \
__asm _emit 0xd8 \
__asm _emit 0x1d \
__asm _emit 0x47 \
__asm _emit 0x5a \
__asm _emit 0x9e \
__asm _emit 0x7c \
__asm _emit 0x34 \
__asm _emit 0xdc \
__asm _emit 0xd3 \
__asm _emit 0x01 \
__asm _emit 0x8b \
__asm _emit 0xc8 \
__asm _emit 0x91 \
__asm _emit 0x51 \
__asm _emit 0xb8 \
__asm _emit 0x5a \
__asm _emit 0x37 \
__asm _emit 0xde \
__asm _emit 0xad \
__asm _emit 0x03 \
__asm _emit 0xee \
__asm _emit 0x43 \
__asm _emit 0xf8 \
__asm _emit 0x84 \
__asm _emit 0x5b \
__asm _emit 0x4b \
__asm _emit 0x68 \
__asm _emit 0xa6 \
__asm _emit 0x61 \
__asm _emit 0xf4 \
__asm _emit 0xa4 \
__asm _emit 0x3d \
__asm _emit 0xaf \
__asm _emit 0xf4 \
__asm _emit 0x76 \
__asm _emit 0xe1 \
__asm _emit 0x6b \
__asm _emit 0xbf \
__asm _emit 0x47 \
__asm _emit 0x1f \
__asm _emit 0x28 \
__asm _emit 0xcd \
__asm _emit 0x2e \
__asm _emit 0x75 \
__asm _emit 0xe2 \
__asm _emit 0x78 \
__asm _emit 0xcd \
__asm _emit 0x77 \
__asm _emit 0xf8 \
__asm _emit 0x40 \
__asm _emit 0x86 \
__asm _emit 0xb9 \
__asm _emit 0x1e \
__asm _emit 0xff \
__asm _emit 0x8c \
__asm _emit 0x8d \
__asm _emit 0x5a \
__asm _emit 0xa3 \
__asm _emit 0x7b \
__asm _emit 0x04 \
__asm _emit 0x74 \
__asm _emit 0x80 \
__asm _emit 0x97 \
__asm _emit 0x89 \
__asm _emit 0xdd \
__asm _emit 0x25 \
__asm _emit 0xd6 \
__asm _emit 0xcf \
__asm _emit 0x09 \
__asm _emit 0x2b \
__asm _emit 0x82 \
__asm _emit 0xda \
__asm _emit 0x2a \
__asm _emit 0x3b \
__asm _emit 0x24 \
__asm _emit 0xf4 \
__asm _emit 0xa4 \
__asm _emit 0x09 \
__asm _emit 0x7f \
__asm _emit 0xa1 \
__asm _emit 0x07 \
__asm _emit 0xc1 \
__asm _emit 0xa6 \
__asm _emit 0x8b \
__asm _emit 0x53 \
__asm _emit 0x8d \
__asm _emit 0x80 \
__asm _emit 0xa1 \
__asm _emit 0x03 \
__asm _emit 0x99 \
__asm _emit 0xf2 \
__asm _emit 0x2e \
__asm _emit 0xbd \


// Don't change this!
#define _JUNK_BLOCK(s) __asm jmp s JUNKS __asm s:


/////////////////////////////////////////////////////////////////////////////////////
//                                 INJECTOR CODE                                   //
/////////////////////////////////////////////////////////////////////////////////////

DWORD Process(char* ProcessName)
{
	_JUNK_BLOCK(jmp_label1)
	HANDLE hPID = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	
	_JUNK_BLOCK(jmp_label2)
	PROCESSENTRY32 ProcEntry;
	
	_JUNK_BLOCK(jmp_label3)
	ProcEntry.dwSize = sizeof(ProcEntry);
	
	_JUNK_BLOCK(jmp_label4)
	do
	{
		_JUNK_BLOCK(jmp_label5)
		if (!strcmp(ProcEntry.szExeFile, ProcessName))
		{
			_JUNK_BLOCK(jmp_label6)
			DWORD dwPID = ProcEntry.th32ProcessID;
			
			_JUNK_BLOCK(jmp_label7)
			CloseHandle(hPID);
			
			_JUNK_BLOCK(jmp_label8)
			return dwPID;
		}
		
		_JUNK_BLOCK(jmp_label9)
	}
	while (Process32Next(hPID, &ProcEntry));
	
	_JUNK_BLOCK(jmp_label10)
}

int main()
{
	_JUNK_BLOCK(jmp_label11)
	DWORD dwProcess;
	
	_JUNK_BLOCK(jmp_label12)
	char myDLL[MAX_PATH];
	
	_JUNK_BLOCK(jmp_label13)
	GetFullPathName(DLL_NAME, MAX_PATH, myDLL, 0);
	
	_JUNK_BLOCK(jmp_label4)
	dwProcess = Process("csgo.exe");

	_JUNK_BLOCK(jmp_label15)
	HANDLE hProcess = OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, FALSE, dwProcess);
	
	LPVOID ntOpenFile = GetProcAddress(LoadLibraryW(L"ntdll"), "NtOpenFile");
	if (ntOpenFile) {
		char originalBytes[5];
		memcpy(originalBytes, ntOpenFile, 5);
		WriteProcessMemory(hProcess, ntOpenFile, originalBytes, 5, NULL);
	}

	_JUNK_BLOCK(jmp_label16)
	LPVOID allocatedMem = VirtualAllocEx(hProcess, NULL, sizeof(myDLL), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
	
	_JUNK_BLOCK(jmp_label17)
	WriteProcessMemory(hProcess, allocatedMem, myDLL, sizeof(myDLL), NULL);
	
	_JUNK_BLOCK(jmp_label18)
	CreateRemoteThread(hProcess, 0, 0, (LPTHREAD_START_ROUTINE)LoadLibrary, allocatedMem, 0, 0);
	
	_JUNK_BLOCK(jmp_label19)
	CloseHandle(hProcess);
	
	_JUNK_BLOCK(jmp_label20)
	return 0;
	
	_JUNK_BLOCK(jmp_label21)
}