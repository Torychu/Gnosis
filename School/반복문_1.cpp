#include <stdio.h>

main(){
//	//30���� 10������ ¦�� 
//	int i=30;
//	while(i >= 10 && i <= 30 && i%2 == 0){
//		printf("%d\n", i);
//		//i = i - 2; 
//		i -= 2;
//	} 
//	printf("���� ���� �� i=%d",i);
	
	
//1���� 10���� (i)�� ��(sum)
	printf("1���� 10���� (i)�� �� (sum) ���ϱ�");
	int i = 1;
	int sum=0;

	while(i <= 10){
		sum += i;
		i++;
	} 
	printf("\n1���� 10������ �� : %d",sum);
}

//	int i=0;
//	while(i<=5){
//		printf("%d ",++i);
//	} 
//	printf("\n���������� i=%d",i);

//	int i=0;
//	while(i<=9){
//		printf("#");
//		
//		i += 1;
//	}
//	printf("\n�� %d��",i);

//	int num=1;
//	
//	while(num<=5){
//		printf("�ݺ� ���� : %d\n",num);
//		num += 1;
//	}
//	printf("�ݺ��� ���� �� num = %d\n", num);
