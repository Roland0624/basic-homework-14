#include<stdio.h>              //�ɤJ�禡�w
#include<stdlib.h>

void is_triangle(int,int,int);     //is_triangle()���쫬
 
int main(void)                    //�D�{��
{ 
	int side1,side2,side3;      //�إ��ܼ� 3�����
	printf("�п�J���\n");
	scanf("%d %d %d",&side1,&side2,&side3);
	is_triangle(side1,side2,side3);   //�I�s�ƨ禡is_triangle
}                                     //�ƨ禡is_triangle
                                          
void is_triangle(int side1,int side2,int side3)
{
	int array[]={side1,side2,side3}; //�إ�array[]�}�C3�����
	int box;
	for(int i=0;i<3;i++)
		for(int j=i+1;j<3;j++){
			if(array[j]>array[i])
			{ /*3�����j�p*/
				box=array[i];
				array[i]=array[j];
				array[j]=box;
			}
		}
	if((array[1]+array[2])>array[0])    //��������M�j��ĤT��
	{  
		printf("�O�T����");
	}
	else
	{
		printf("���O�T����");
	}
}
