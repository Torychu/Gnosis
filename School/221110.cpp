#include <stdio.h>
main(){
//	int num1[2][3] = {{10,20,30}, {40,50,60}};
//	int num2[][3] = {{10,20,30}, {40,50,60}};
//	int num3[2][3] = {10,20,30,40,50,60};

//	int i,j=0;
//	printf("%d\n", num1[0][2]);
//	printf("%d\n", num2[1][1]);
//	printf("%d\n", num3[1][2]);
//	for(j=0;j < 2;j++)
//	{
//		for(i=0;i < 3; i++)
//		{
//			printf("%3d",num1[j][i]);
//		}
//		printf("\n");
//	}

//	int num1[3][2] = {{1,2}, {3,4}, {5,6}};
////	int num1[3][2] = {1,2,3,4,5,6};
////	int num1[][2] = {1,2,3,4,5,6}};
//	
//	printf("%d\n", num1[0][0]);
//	printf("%d\n", num1[1][1]);
//	printf("%d\n", num1[2][1]);

//	int a[2][3] = {{100,90,80}, {70,60,50}};
//	int i,j;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)  
//			printf("%4d",a[i][j]);
//		printf("\n");
//	}	


//	int a[4][2];
//	int i,j;
//	int tot;
//	double avg;
//	
//	for(i=0;i<4;i++)
//	{
//		printf("%d�� �л��� ����, C��� ���� �Է� : ", i+1);
//			for(j=0;j<2;j++)
//				scanf("%d",&a[i][j]);	
//	}
//	
//	for(i=0;i<4;i++)
//	{
//		tot = 0;
//		for(j = 0; j < 2; j++)
//			tot += a[i][j];
//		avg = tot / 2.0;
//		printf("%d�� �л��� ",i+1);
//		printf("����: %3d, ��� : %.2f\n",tot,avg);
//	}

//	char city[3][10] = {"Seoul", " Busan", "Incheon"};
//	
//	printf("%s\n", city[0]);
//	printf("%s\n", city[1]);
//	printf("%s\n", city[2]);

	
//	char ani1[4][10] = {
//	{'c','a','t','\0'},
//	{'h','o','r','s','e','\0'},
//	{'d','o','g','\0'},
//	{'t','i','g','e','r','\0'},
//};
//	char ani2[][10] = {"cat", "horse", "dog", "tiger"};
//	int i;
//	for(i=0;i<4;i++)
//		printf("%s ",ani2[i]);
//	printf("\n");
//	for(i=0;i<4;i++)
//		printf("%s ",ani2[i]);


//	int arr[5];
//	int max,min,i;
//	for(i=0;i<5;i++)
//	{
//		printf("�Է�: ");
//		scanf("%d",&arr[i]);
//	}
//	max = min = arr[0];
//	for(i = 0;i<5;i++)
//	{
//		if(max < arr[i]) max = arr[i];
//		if(min > arr[i]) min = arr[i];
//	}
//		printf("�ִ밪: %d\n",max);
//		printf("�ּҰ�: %d\n",min);

//	int arr[5], sum = 0, i;
//	float avg;
//	for (i=0;i<5;i++)
//	{
//		printf("%d���� ���� : ", i+1);
//		scanf("%d",&arr[i]);
//		sum = sum + arr[i];
//	}
//	avg = sum / 5.0;
//	printf("������ %d���̸�, ����� %.2f ���Դϴ�.", sum, avg);

	
	int i,n;
	int a[10] = {65, 45, 73, 5, 82, 25, 3, 34, 12, 20};
	
	printf("�˻��� ������ : ");
	scanf("%d", &n);
	for(i=0;i<10;i++)
		{
			if(a[i] == n)
			{
			printf("%d�� a[%d]�� �ֽ��ϴ�.\n",n,i);
			break;
			}
		}
		if(i>10)
			printf("%d�� ã�� �� �����ϴ�.\n",n);
}
