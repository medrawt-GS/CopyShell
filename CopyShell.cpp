#include <stdio.h>
#include <windows.h>
#include <cstdio> 
#define N 10
int main(int argc, char *argv[])
{
	char s[1024];
	for (int i = 0; i < N; i++){
		snprintf(s, sizeof(s), "Virus%d.exe", i);
		CopyFile(argv[0], s, 0);
	}
	return 0;	
}
