#define _CRT_SECURE_NO_WARNINGS 1

//
//#include<stdio.h>
//int check_sys()
//{
//    int i=1;            //00000000000000000000000000000001
//	return(*(char *)&i);//0000 0001
//}                       //����С�˴��棬���� ���ַ�λ�� �������1
//int main()
//{
//	int  ret=check_sys();
//	if(ret==1)
//	{
//		printf("С��\n");
//	}
//	else
//		
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//
//{
//	char a=-1; 
//	signed char b=-1;
//	unsigned char c=-1;
//	printf("a=%d,b=%d,c=%d\n",a,b,c);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	char a=-128;
//	printf("%u\n",a);
//	return 0;        //4294967168
//}
//


//#include<stdio.h>
//
//int main()
//{
//	char a=128;
//	printf("%u\n",a);
//	return 0;           //4294967168
//}


//#include<stdio.h>
//
//int main()
//{
//	
//	int  a=-20;        //����:1111 1111 1111 1111 1111 1111 1110 1100
//	unsigned int b=10; //����:0000 0000 0000 0000 0000 0000 0000 1010
//	printf("%d\n",a+b);//����:1000 0000 0000 0000 0000 0000 0000 1010
//	return 0;          
//}
//


//#include<stdio.h>
//
//int main()
//{
//	char a[1000];
//	int i;
//	int  sz=0;
//	for(i=0;i<1000;i++)
//	{
//	a[i]=-1-i;
//	}
//	sz =sizeof (a)/sizeof (a[0]);
//	printf("%d\n",sz);
//	return 0;    //1000
//}

//#include<stdio.h>
//
//unsigned char i=0;
//int main()
//{
//    for(i=0;i<=255;i++)
//	{
//		printf("hellow world!\n");
//	}
//	return 0;//��ѭ��
//}
//
//
//


#include<stdio.h>

//int main()
//{
//	int a=-10;
//	int b=10;
//	return 0;
//}