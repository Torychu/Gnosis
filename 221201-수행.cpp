#include <stdio.h>
#include <string.h>
main(){
//	int data[6], i;
//	
//	for (i=0;i<6;i++)
//	{
//		printf("������ �Է�: ");
//		scanf("%d",&data[i]);
//	}
//	for (i=5;i>=0;i--)
//		printf("%d ",data[i]);

//	char voca[50];
//	int len=0;
//	
//	printf("���ܾ� �Է�: ");
//	scanf("%s",voca);
//	
//	while(voca[len] != '\0')
//		len++;
//		
//	printf("�Է��� ���ܾ��� ���̴� %d",len); 

//	char str[100];
//	int i;
//	printf("������ �Է� : ");
//	gets(str);
//	
//	printf("str�� ���� ���� : %d\n",strlen(str));
//	
//	for(i = strlen(str)-1;i>=0;i--)
//		printf("%c",str[i]);

	int a[4][2];
	int i,j;
	int tot;
	double avg;
	
	for (i=0;i<4;i++)
	{
		printf("%d�� �л��� ����, C��� ���� �Է� : ",i+1);
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
		printf("%d�� �л��� ���� : %d, ��� : %.2f",i+1,tot,avg);
		printf("\n");
	}
	
}
