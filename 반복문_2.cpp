#include <stdio.h>
main(){
	// 30 , 10
//	int i , n, sum = 0;
//	
//	printf("합을 구할 처음 수 입력 : ");
//	scanf("%d",&i);
//	printf("합을 구할 마지막 수 입력 : ");
//	scanf("%d",&n);
//	
//	while(i <= n){
//		sum += i;
//		i++;
//	}
//	printf("%d부터 %d까지의 합은 %d입니다.\n", i, n, sum);
	
	int i , n, sum = 0, result;
	
	printf("큰 수 입력 : ");
	scanf("%d",&i);
	printf("작은 수 입력 : ");
	scanf("%d",&n);
	
	result = i;
	
	while(i >= n){
		sum += i;
		i--;
	}
	printf("%d부터 %d까지의 합은 %d입니다.\n", result, n, sum);
}
