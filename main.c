#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	









int sumTwo(int a, int b)
{

	int result= a+b;
	return result;
}

int square(int n)
{
	return n*n;
}

int get_max(int x,int y)
{ 	
	if(x>y)
		return x;
	else
		return y; /* no else is ok. just return y ok.*/
		
}


int main(void){
	int a,b;
	
	a=3;
	b=10;
	printf("sumTwo result: %i\n", sumTwo(a,b));
	printf("square result: %i\n", square(a));
	printf("get_max result: %i\n", get_max(a,b));
	
	system("PAUSE");
	return 0;

}
	

