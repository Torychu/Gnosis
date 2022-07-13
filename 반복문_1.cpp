#include <stdio.h>

main(){
//	//30부터 10까지의 짝수 
//	int i=30;
//	while(i >= 10 && i <= 30 && i%2 == 0){
//		printf("%d\n", i);
//		//i = i - 2; 
//		i -= 2;
//	} 
//	printf("루프 종료 후 i=%d",i);
	
	
//1부터 10까지 (i)의 합(sum)
	printf("1부터 10까지 (i)의 합 (sum) 구하기");
	int i = 1;
	int sum=0;

	while(i <= 10){
		sum += i;
		i++;
	} 
	printf("\n1부터 10까지의 합 : %d",sum);
}

//	int i=0;
//	while(i<=5){
//		printf("%d ",++i);
//	} 
//	printf("\n루프종료후 i=%d",i);

//	int i=0;
//	while(i<=9){
//		printf("#");
//		
//		i += 1;
//	}
//	printf("\n총 %d개",i);

//	int num=1;
//	
//	while(num<=5){
//		printf("반복 내용 : %d\n",num);
//		num += 1;
//	}
//	printf("반복문 종료 후 num = %d\n", num);
