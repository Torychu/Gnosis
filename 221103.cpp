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
//		printf("%d번째 정수 입력: ",i+1);
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
//	printf("입력한 정수 중에서 최대값 : %d\n",max);
//	printf("입력한 정수 중에서 최소값 : %d\n",min);
//	printf("입력한 정수의 합계 : %d\n",sum);

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
//	printf("가장 키가 작은 학생번호 = %d번, 키 = %dcm \n",num,h_min);

//	char str[10];
//	printf("당신의 이름은 무엇입니까? : ");
//	scanf("%s",str);
//	printf("안녕하세요 %s님\n",str);

//	char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//	char str2[] = "world!";
//	int i;
//	
//	printf("%s\n", str1);
//	for(i = 0;i < sizeof(str2) -1;i++) // -1이 붙으면 NULL이 출력이 안되므로 공백을 없앨 수 있음. 
////	for(i = 0; str2[i] != '\0';i++ )
//		printf("%c",str2[i]);
////	printf("%s\n", str2);
//
//	printf("\nstr1의 크기 : %d\n",sizeof(str1));
//	printf("str2의 크기 : %d\n",sizeof(str2));
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
//	printf("한 문자씩 출력\n");
//	while(str[i] != '\0')
//	{
//		printf("%c",str[i]);
//		i++;
//	}
//	printf("\n\n문자열로 한꺼번에 출력\n");
//	printf("%s",str);

//	char a[] = "Seoul Robotics";
//	printf("%s\n",a);
//	a[5] = '\0';
//	printf("%s\n",a);	

//	char voca[50];
//	int len = 0;
//	printf("영단어 입력: ");
//	scanf("%s",voca);
//
//	while (voca[len] != '\0')
//		len++;
//	printf("입력한 영단어의 길이는 %d\n",len);

	char str[100];
	int i;
	gets(str);
	printf("str의 문자길이 : %d\n", strlen(str));
	
	for (i=strlen(str)-1; i >= 0; i--)
		printf("%c",str[i]);
	
	
}
