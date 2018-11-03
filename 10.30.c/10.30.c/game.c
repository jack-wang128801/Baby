#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"



void InitBoard(char arr[ROWS][COLS],int rows,int cols,char n )
{
	memset(&arr[0][0],n,rows*cols*sizeof(arr[0][0]));
}

void DisplayBoard(char arr[ROWS][COLS],int row,int col)
{
	int i,j;
	printf("-----------------------------\n");
	for(i=0;i<=col;i++)
	{
		printf("%d ",i);	
	}
	printf("\n");
	
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
             printf("%c ",arr[i][j]);
				
		}
		printf("\n");
	}
	
	printf("-----------------------------\n");
}

void SetMine(char mine[ROWS][COLS],int row,int col)
{
	
	int count=Easycount;
	while(count)
	{
	    int x=rand()%row+1;
	    int y=rand()%col+1;
		if(mine[x][y]=='0')
		{
			mine[x][y]='1';
				count--;
		}

	}
    
}
void DelectMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
   int x=0;
   int y=0;
   int i=0;
   while(1)
   {
	   printf("请输入要落子的坐标:>");
       scanf("%d%d",&x,&y);
	   if(x>=1 && x<=row && y>=1 && y<=col)
	   {
		   
            if(mine[x][y]=='1') 
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(show,row,col);
				break;
			}
			else 
			{
				int count=AddMine(mine,x,y);
				show[x][y] = count+'0';
				
				DisplayBoard(show,row,col);
				i++;
				
				if(i == row*col- Easycount)
               {
	                 printf("恭喜你，排雷成功！！！！\n");
	                 DisplayBoard(mine,row,col);
					 break;
                }
			}
	   }
	   else 
	   {
		   printf("输入的坐标不合法，请重新输入！\n");
	   }
	   
   }
   
}

//计算玩家输入坐标周围的地雷数
int AddMine(char mine[ROWS][COLS], int x, int y)
{
		return mine[x-1][y]+
			mine[x-1][y-1]+
			mine[x][y-1]+
			mine[x+1][y-1]+
			mine[x+1][y]+
			mine[x+1][y+1]+
			mine[x][y+1]+
			mine[x-1][y+1] - 8*'0';

}
