// HelloCppFortran.cpp : 定义控制台应用程序的入口点。
//

#include <stdio.h>
#include <stdlib.h>

#include "stdafx.h"
#include "FunDll.h"

int main()
{
	int ans = myadd(1,2);  //Invoking Function of FunDLL (DLL)
	printf("ans = %d\n",ans);

	getchar();

	return 0;
}


