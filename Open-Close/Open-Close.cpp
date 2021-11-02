#include <windows.h>

int main ()		//RICCARDO SILVESTRI

{

HWND hWnd = GetConsoleWindow();  //hide cmd
ShowWindow( hWnd, SW_HIDE );	//hide cmd

 system ("start chrome.exe https://www.youtube.com/");	
	for (int i = 0; i < 10; i++) {	

Sleep(500); 	
 system ("start https://www.twitch.tv/");

	}
	Sleep(10000); 
system ("taskkill /IM chrome.exe /F");		

	 
}

