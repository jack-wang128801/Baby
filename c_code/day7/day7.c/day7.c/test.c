#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
}
void game()
{
	int random_num=rand()%100+1;
	int input = 0;
	while(1)
	{
		printf("������µ�����");
		scanf("%d",&input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input < random_num)
		{
		    printf("��С��\n");
		}
		else
		{
		     printf("��ϲ�㣬�¶���\n");
			 break;
		}//else
	}
}

int main()
{
	int input=0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
				break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	}while(input);
	return 0;

}