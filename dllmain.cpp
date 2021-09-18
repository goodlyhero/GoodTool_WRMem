#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>

DWORD dwGameDLL;
DWORD pRegisterNative;

void InitData()
{
	
	dwGameDLL = (DWORD)GetModuleHandle("Game.dll");
	pRegisterNative = (dwGameDLL + 0x455110);

}
void WriteRealMemoryC(DWORD dest, DWORD data)
{
	if (dest > 0x500)
	{
		*(DWORD*)dest = data;
	}
}
DWORD ReadRealMemoryC(DWORD dest)
{
	return *(DWORD*)dest;
	if (dest > 0x500)
	{
		return *(DWORD*)dest;
	}
	return 0;
}

inline void WriteRealMemory(DWORD dest, DWORD data)
{
	if (dest > 0x500)
	{
		*(DWORD*)dest = data;
	}
}
inline DWORD ReadRealMemory(DWORD dest)
{
	if (dest > 0x500)
	{
		return *(DWORD*)dest;
	}
}

namespace calls
{
	inline int this_call(int pfuncaddr, int arg1)
	{
		return ((int(__thiscall*) (int i1))pfuncaddr)(arg1);
	}

	inline int this_call(int pfuncaddr, int arg1, int arg2)
	{
		return ((int(__thiscall*) (int i1, int i2))pfuncaddr)(arg1, arg2);
	}

	inline int this_call(int pfuncaddr, int arg1, int arg2, int arg3)
	{
		return ((int(__thiscall*) (int i1, int i2, int i3))pfuncaddr)(arg1, arg2, arg3);
	}

	inline int this_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4)
	{
		return ((int(__thiscall*) (int i1, int i2, int i3, int i4))pfuncaddr)(arg1, arg2, arg3, arg4);
	}

	inline int this_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5)
	{
		return ((int(__thiscall*) (int i1, int i2, int i3, int i4, int i5))pfuncaddr)(arg1, arg2, arg3, arg4, arg5);
	}

	inline int this_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
	{
		return ((int(__thiscall*) (int i1, int i2, int i3, int i4, int i5, int))pfuncaddr)(arg1, arg2, arg3, arg4, arg5, arg6);
	}

	inline int this_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7)
	{
		return ((int(__thiscall*) (int i1, int i2, int i3, int i4, int i5, int, int))pfuncaddr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	}

	inline int fast_call(int pfuncaddr, int arg1)
	{
		return ((int(__fastcall*) (int i1))pfuncaddr)(arg1);
	}

	inline int fast_call(int pfuncaddr, int arg1, int arg2)
	{
		return ((int(__fastcall*) (int i1, int i2))pfuncaddr)(arg1, arg2);
	}

	inline int fast_call(int pfuncaddr, int arg1, int arg2, int arg3)
	{
		return ((int(__fastcall*) (int i1, int i2, int i3))pfuncaddr)(arg1, arg2, arg3);
	}

	inline int fast_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4)
	{
		return ((int(__fastcall*) (int i1, int i2, int i3, int i4))pfuncaddr)(arg1, arg2, arg3, arg4);
	}

	inline int fast_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5)
	{
		return ((int(__fastcall*) (int i1, int i2, int i3, int i4, int i5))pfuncaddr)(arg1, arg2, arg3, arg4, arg5);
	}

	inline int fast_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
	{
		return ((int(__fastcall*) (int i1, int i2, int i3, int i4, int i5, int))pfuncaddr)(arg1, arg2, arg3, arg4, arg5, arg6);
	}

	inline int fast_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7)
	{
		return ((int(__fastcall*) (int i1, int i2, int i3, int i4, int i5, int, int))pfuncaddr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	}

	inline int cdecl_call(int pfuncaddr, int arg1)
	{
		return ((int(__cdecl*) (int i1))pfuncaddr)(arg1);
	}

	inline int cdecl_call(int pfuncaddr, int arg1, int arg2)
	{
		return ((int(__cdecl*) (int i1, int i2))pfuncaddr)(arg1, arg2);
	}

	inline int cdecl_call(int pfuncaddr, int arg1, int arg2, int arg3)
	{
		return ((int(__cdecl*) (int i1, int i2, int i3))pfuncaddr)(arg1, arg2, arg3);
	}

	inline int cdecl_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4)
	{
		return ((int(__cdecl*) (int i1, int i2, int i3, int i4))pfuncaddr)(arg1, arg2, arg3, arg4);
	}

	inline int cdecl_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5)
	{
		return ((int(__cdecl*) (int i1, int i2, int i3, int i4, int i5))pfuncaddr)(arg1, arg2, arg3, arg4, arg5);
	}

	inline int cdecl_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
	{
		return ((int(__cdecl*) (int i1, int i2, int i3, int i4, int i5, int))pfuncaddr)(arg1, arg2, arg3, arg4, arg5, arg6);
	}

	inline int cdecl_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7)
	{
		return ((int(__cdecl*) (int i1, int i2, int i3, int i4, int i5, int, int))pfuncaddr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	}

	inline int std_call(int pfuncaddr, int arg1)
	{
		return ((int(__stdcall*) (int i1))pfuncaddr)(arg1);
	}

	inline int std_call(int pfuncaddr, int arg1, int arg2)
	{
		return ((int(__stdcall*) (int i1, int i2))pfuncaddr)(arg1, arg2);
	}

	inline int std_call(int pfuncaddr, int arg1, int arg2, int arg3)
	{
		return ((int(__stdcall*) (int i1, int i2, int i3))pfuncaddr)(arg1, arg2, arg3);
	}

	inline int std_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4)
	{
		return ((int(__stdcall*) (int i1, int i2, int i3, int i4))pfuncaddr)(arg1, arg2, arg3, arg4);
	}

	inline int std_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5)
	{
		return ((int(__stdcall*) (int i1, int i2, int i3, int i4, int i5))pfuncaddr)(arg1, arg2, arg3, arg4, arg5);
	}

	inline int std_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
	{
		return ((int(__stdcall*) (int i1, int i2, int i3, int i4, int i5, int))pfuncaddr)(arg1, arg2, arg3, arg4, arg5, arg6);
	}

	inline int std_call(int pfuncaddr, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7)
	{
		return ((int(__stdcall*) (int i1, int i2, int i3, int i4, int i5, int, int))pfuncaddr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	}
}

DWORD RegisterNative(void* func, const char* name, const char* sig)
{
	return calls::fast_call( pRegisterNative,(DWORD)func,(DWORD)name, (DWORD)sig);
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
	{
	DisableThreadLibraryCalls(hModule);
		switch (dwReason)
		{
		case (DLL_PROCESS_ATTACH):
			InitData();
			const char* wmema = "WriteRealMemoryC";
			const char* wmemb = "(II)V";
			const char* rmema = "ReadRealMemoryC";
			const char* rmemb = "(I)I";
			RegisterNative(WriteRealMemoryC, strcpy(new char[strlen(wmema) + 1], wmema), strcpy(new char[strlen(wmemb) + 1], wmemb));
			RegisterNative(ReadRealMemoryC, strcpy(new char[strlen(rmema) + 1], rmema), strcpy(new char[strlen(rmemb) + 1], rmemb));
			
			
			/*RegisterNative(WriteRealMemoryC, wmema, wmemb);
			RegisterNative(ReadRealMemoryC, rmema, rmemb);*/
		}

		return TRUE;
}

