#include<stdio.h>
main(){
	
// �����ֿ� �÷Ⱦ��. 10614 ����ȯ  
//	int score[5];
//	int i, sum = 0;
//	for(i = 0; i < 5; i++)
//	{
//		printf("%d�� �л��� ���α׷��� ������ �Է�: ",i+1);
//		scanf("%d",&score[i]);
//	}
//	for(i = 0;i < 5; i++)
//		sum += score[i];
//
//	printf("���� : %d \n",sum);
//	printf("��� : %.2f \n",sum/5.0);

//	int score[5];
//	int i, max = 0;
//	
//	for(i = 0; i < 5; i++)
//	{
//		printf("%d�� �л��� ���α׷��� ������ �Է�: ",i+1);
//		scanf("%d",&score[i]);
//	}
//	for(i = 0;i < 5; i++)
//		if(score[i] >= max)
//			max = score[i];
//	printf("�ְ� ���� : %d \n",max);
	
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
	printf("���� Ű�� ���� �л���ȣ = %d��, Ű = %dcm \n", num, h_min);	
}

