#include<stdio.h>              //導入函式庫
#include<stdlib.h>

void is_triangle(int,int,int);     //is_triangle()的原型
 
int main(void)                    //主程式
{ 
	int side1,side2,side3;      //建立變數 3個邊長
	printf("請輸入邊長\n");
	scanf("%d %d %d",&side1,&side2,&side3);
	is_triangle(side1,side2,side3);   //呼叫副函式is_triangle
}                                     //副函式is_triangle
                                          
void is_triangle(int side1,int side2,int side3)
{
	int array[]={side1,side2,side3}; //建立array[]陣列3個邊長
	int box;
	for(int i=0;i<3;i++)
		for(int j=i+1;j<3;j++){
			if(array[j]>array[i])
			{ /*3邊長比大小*/
				box=array[i];
				array[i]=array[j];
				array[j]=box;
			}
		}
	if((array[1]+array[2])>array[0])    //兩邊邊長和大於第三邊
	{  
		printf("是三角形");
	}
	else
	{
		printf("不是三角形");
	}
}
