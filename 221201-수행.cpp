#include <stdio.h>
#include <string.h>
main(){
//	int data[6], i;
//	
//	for (i=0;i<6;i++)
//	{
//		printf("정수를 입력: ");
//		scanf("%d",&data[i]);
//	}
//	for (i=5;i>=0;i--)
//		printf("%d ",data[i]);

//	char voca[50];
//	int len=0;
//	
//	printf("영단어 입력: ");
//	scanf("%s",voca);
//	
//	while(voca[len] != '\0')
//		len++;
//		
//	printf("입력한 영단어의 길이는 %d",len); 

//	char str[100];
//	int i;
//	printf("영문장 입력 : ");
//	gets(str);
//	
//	printf("str의 문자 길이 : %d\n",strlen(str));
//	
//	for(i = strlen(str)-1;i>=0;i--)
//		printf("%c",str[i]);

	int a[4][2];
	int i,j;
	int tot;
	double avg;
	
	for (i=0;i<4;i++)
	{
		printf("%d번 학생의 수학, C언어 성적 입력 : ",i+1);
		for(j=0;j<2;j++)
			{
				scanf("%d",&a[i][j]);
			}
	}
	for (i=0;i<4;i++)
	{
		tot = 0;
		for(j=0;j<2;j++)
			{
				tot += a[i][j];
			}
		avg = tot/2.0;
		printf("%d번 학생의 총점 : %d, 평균 : %.2f",i+1,tot,avg);
		printf("\n");
	}
	
}
