//mm1.cpp --to change the win10 taskbar to win11 's
#include <windows.h>
#include <conio.h> 
int main()
{
	HWND cmd=FindWindow("ConsoleWindowClass",NULL); //获取最前端窗口 
	SetWindowPos(cmd,HWND_BOTTOM,0,0,0,0,SWP_HIDEWINDOW | SWP_NOOWNERZORDER);//隐藏窗口+保持z轴 
	int cx = GetSystemMetrics(SM_CXSCREEN);   
	int cy = GetSystemMetrics(SM_CYSCREEN);
	int a,b,c,d,e;
	a=cx*800/1920;
	b=cx*700/1920;
	c=cx*1532/1920;
	d=cx*640/1920;
	e=cy*1040/1080;
	while(1)
		{ 
		HWND stw=FindWindow("Shell_TrayWnd",NULL); 
		HWND sta=FindWindowEx(stw,NULL,"Start",NULL);
		HWND rbw32=FindWindowEx(stw,NULL,"ReBarWindow32",NULL);
		HWND mstswc=FindWindowEx(rbw32,NULL,"MSTaskSwWClass",NULL);
		HWND tbttc=FindWindowEx(stw,NULL,"TrayButton","与 Cortana 交流"); 
		HWND tbtl=FindWindowEx(stw,NULL,"TrayButton","任务视图");
		HWND m=FindWindow("Windows.UI.Core.CoreWindow","启动");//开始菜单 
		SetWindowPos(sta,HWND_TOP,a,0,48,40,SWP_SHOWWINDOW);
		SetWindowPos(mstswc,HWND_TOP,b,0,c,40,SWP_SHOWWINDOW);
		SetWindowPos(tbttc,HWND_BOTTOM,0,0,48,40,SWP_HIDEWINDOW|SWP_NOOWNERZORDER);
		SetWindowPos(tbtl,HWND_BOTTOM,0,0,48,40,SWP_HIDEWINDOW|SWP_NOOWNERZORDER);
		SetWindowPos(m,HWND_TOP,d,0,cx,e,SWP_SHOWWINDOW);
		Sleep(10); 
		}
return 0;
}

