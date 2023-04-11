#include<stdio.h>
main(){
	
// 지난주에 올렸어요. 10614 정윤환  
//	int score[5];
//	int i, sum = 0;
//	for(i = 0; i < 5; i++)
//	{
//		printf("%d번 학생의 프로그래밍 성적을 입력: ",i+1);
//		scanf("%d",&score[i]);
//	}
//	for(i = 0;i < 5; i++)
//		sum += score[i];
//
//	printf("총점 : %d \n",sum);
//	printf("평균 : %.2f \n",sum/5.0);

//	int score[5];
//	int i, max = 0;
//	
//	for(i = 0; i < 5; i++)
//	{
//		printf("%d번 학생의 프로그래밍 성적을 입력: ",i+1);
//		scanf("%d",&score[i]);
//	}
//	for(i = 0;i < 5; i++)
//		if(score[i] >= max)
//			max = score[i];
//	printf("최고 점수 : %d \n",max);
	
	int h[]={170, 178, 175, 180, 177, 167, 189};
	int i, h_min = h[0], num;
	
	for(i = 0 ; i < 7; i++)
	{
		if(h_min > h[i])
		{
			h_min = h[i];
			num = i+1;
		}	
	}
	printf("가장 키가 작은 학생번호 = %d번, 키 = %dcm \n", num, h_min);	
}

