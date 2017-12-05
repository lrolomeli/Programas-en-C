#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() 
{
	int horas, min, seg, x;
	x = 10;
	
	for(horas=0;horas<24;horas++){
		for(min=0;min<60;min++){
			for(seg=0;seg<60;seg++){
				printf("%02i:%02i:%02i\r",horas,min,seg);
				Sleep(x);
			}
		}
	}
	
	
	system("pause");
	return 0;
}
