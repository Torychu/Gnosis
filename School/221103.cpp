#include <stdio.h>
#include <string.h>
main(){
//	int i,arr[5] = {10,20,30,0,0};
//	for(i=0;i<5;i++)
//	{
//		printf("arr[%d] = %d\n",i,arr[i]);
//	}

//	int i,num[5],max,min = 100,sum;
//	for(i=0;i<5;i ++)
//	{
//		printf("%d��° ���� �Է�: ",i+1);
//		scanf("%d",&num[i]);
//	}
//	for(i=0;i<5;i++)
//	{
//		if(num[i]>=max)
//			max = num[i];
//		if(num[i]<=min)
//			min = num[i];
//		sum += num[i];
//	}
//	printf("�Է��� ���� �߿��� �ִ밪 : %d\n",max);
//	printf("�Է��� ���� �߿��� �ּҰ� : %d\n",min);
//	printf("�Է��� ������ �հ� : %d\n",sum);

//	int h[]={150, 178, 175, 180, 177, 167, 189};
//	int i, h_min = h[0], num;
//	
//	for(i=0;i<7;i++)
//	{
//		if(h_min >= h[i])
//		{
//			h_min = h[i];
//			num = i+1;
//		}
//	}
//	printf("���� Ű�� ���� �л���ȣ = %d��, Ű = %dcm \n",num,h_min);

//	char str[10];
//	printf("����� �̸��� �����Դϱ�? : ");
//	scanf("%s",str);
//	printf("�ȳ��ϼ��� %s��\n",str);

//	char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//	char str2[] = "world!";
//	int i;
//	
//	printf("%s\n", str1);
//	for(i = 0;i < sizeof(str2) -1;i++) // -1�� ������ NULL�� ����� �ȵǹǷ� ������ ���� �� ����. 
////	for(i = 0; str2[i] != '\0';i++ )
//		printf("%c",str2[i]);
////	printf("%s\n", str2);
//
//	printf("\nstr1�� ũ�� : %d\n",sizeof(str1));
//	printf("str2�� ũ�� : %d\n",sizeof(str2));
//	str2[5] = '~';
//	printf("%s\n", str2);

//	int i;
//	char str[] = {'G', 'o', 'o', 'd', '\0', 'T', 'i', 'm', 'e', '\0'};
//	
//	for(i = 0 ; i < sizeof(str) ; i++)
//	{
//		printf("str[%d] = %c\n", i, str[i]);
//	}

//	char str[6] = "apple";
//	int i = 0;
//	printf("�� ���ھ� ���\n");
//	while(str[i] != '\0')
//	{
//		printf("%c",str[i]);
//		i++;
//	}
//	printf("\n\n���ڿ��� �Ѳ����� ���\n");
//	printf("%s",str);

//	char a[] = "Seoul Robotics";
//	printf("%s\n",a);
//	a[5] = '\0';
//	printf("%s\n",a);	

//	char voca[50];
//	int len = 0;
//	printf("���ܾ� �Է�: ");
//	scanf("%s",voca);
//
//	while (voca[len] != '\0')
//		len++;
//	printf("�Է��� ���ܾ��� ���̴� %d\n",len);

	char str[100];
	int i;
	gets(str);
	printf("str�� ���ڱ��� : %d\n", strlen(str));
	
	for (i=strlen(str)-1; i >= 0; i--)
		printf("%c",str[i]);
	
	
}
