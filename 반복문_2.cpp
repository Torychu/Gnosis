#include <stdio.h>
main(){
	// 30 , 10
//	int i , n, sum = 0;
//	
//	printf("���� ���� ó�� �� �Է� : ");
//	scanf("%d",&i);
//	printf("���� ���� ������ �� �Է� : ");
//	scanf("%d",&n);
//	
//	while(i <= n){
//		sum += i;
//		i++;
//	}
//	printf("%d���� %d������ ���� %d�Դϴ�.\n", i, n, sum);
	
	int i , n, sum = 0, result;
	
	printf("ū �� �Է� : ");
	scanf("%d",&i);
	printf("���� �� �Է� : ");
	scanf("%d",&n);
	
	result = i;
	
	while(i >= n){
		sum += i;
		i--;
	}
	printf("%d���� %d������ ���� %d�Դϴ�.\n", result, n, sum);
}
