// HelloCppFortran.cpp : �������̨Ӧ�ó������ڵ㡣
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


