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
	//�и�, ���� ������ ���� 
	return (div1/div2);
}
int main(void)
{
	int n,r;
	int div1, div2; //div1: ����, div2: �и�
	int result; 
	//1.�Է°� ����
	//�޼��� ��� 
	printf("input n : "); 
	//n�Է� 
	scanf("%d",&n);
	// �޼��� ���
	printf("input r : ");
	//r �Է�
	scanf("%d",&r);
	//2. �и�/���� ���
	result=combination(n,r);
 
	//3. ���� �� ��� 
		//�и�, ���� ������ ����
		//��� ��� 
	printf("result is %i\n",result);

	 
}








