#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{	int i;
	int result=1;
	for(i=1;i<=n;i++){
		result=result*i;
	}
		return result;	
}



int combination(int n, int r)
{
	int div1, div2;
	div1= factorial(n);//n!
	div2= factorial(n-r)* factorial(r);
	//분모, 분자 나누기 연산 
	return (div1/div2);
}
int main(int argc,char*argv()){

	int n,r;
	int div1, div2; //div1: 분자, div2: 분모
	int result; 
	//1.입력값 받음
	
	//n입력  
	printf("input n : \n"); 
	scanf("%d",&n);
	//r 입력
	printf("input r : \n");
	scanf("%d",&r);
	
	//2. 분모/분자 계산
	result=combination(n,r);
    //n! n-r!r! 계산
    //분모/분자 계산
  
	//3. 최종 값 출력 
		//분모, 분자 나누기 연산
		//결과 출력 
	//printf("result is %i\n",result);
	printf("the combination of %d and %d will be: %d,n,r,result);
	system("PAUSE");
	return 0;

	 
}








