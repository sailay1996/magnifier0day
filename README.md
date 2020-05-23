# magnifier0day
Windows 10 Privilege Escalation (magnify.exe) via Dll Search Order Hijacking

*can exploit every windows which installed intel Driver.*

***Some of the ppl will say this is not vuln because of default system paths %path% but most of the user have the user writeable path in SYSTEM %PATH% then we can exploit it.***

### steps:
1. copy payload dll as igdgmm64.dll to SYSTEM path %PATH% which is writeable such as C:\python27
2. Press WinKey+L  
3. Press Enter
4. Press WinKey++(plusKey) on login screen which show password box.<br>
then payload dll will execute as SYSTEM access.

**or** <br>
`WinKey+L (LogonUI) ->  Ease of Access - > Magnifier ->  login.` <br>
payload will execute as SYSTEM

#### Noted: Use this for finding paths 
https://github.com/sailay1996/awesome_windows_logical_bugs/blob/master/find_dir4_privEsc_dll_hijack.txt

![test1](https://github.com/sailay1996/magnifier0day/blob/master/Magnify_0day.jpg)

[@404death](https://twitter.com/404death)
